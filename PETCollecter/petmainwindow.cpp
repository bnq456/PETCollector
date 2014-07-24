#include "petmainwindow.h"
#include "ui_petmainwindow.h"

PETMainWindow::PETMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PETMainWindow),
    tcpClient(NULL),
    udpClient(NULL)
{
    ui->setupUi(this);
    tcpClient=new QTcpSocket(this);
    tcpClient->abort();
    connect(tcpClient,SIGNAL(readyRead()),this,SLOT(ReadTcpData()));
    connect(tcpClient,SIGNAL(error(QAbstractSocket::SocketError)),
            this,SLOT(ReadTcpError(QAbstractSocket::SocketError)));
    PanelInit();
    CommandInit();
    DetectorThreadInit();
}

PETMainWindow::~PETMainWindow()
{
    delete ui;
}

void PETMainWindow::PanelInit()
{
    ui->checkBoxD0->setDisabled(true);  //! 今后扩展用，功能没有实装
    ui->checkBoxD1->setDisabled(true);
    ui->checkBoxD2->setDisabled(true);
    ui->checkBoxD3->setDisabled(true);
    ui->checkBoxD4->setDisabled(true);
    ui->checkBoxD5->setDisabled(true);
    ui->checkBoxD6->setDisabled(true);
    ui->checkBoxD7->setDisabled(true);

    ui->checkBoxRehex->setChecked(true);    //! 打开十六进制显示
    ui->groupBoxData->setDisabled(true);    //! 关闭采集界面
    ui->progressBarC->setMinimum(0);
    ui->progressBarC->setMaximum(100);
    ui->progressBarC->reset();
    timer = new QTimer(this);
    timer->setSingleShot(true);
    connect(timer, SIGNAL(timeout()), this, SLOT(CollectTimeout()));
    timeout = 0;
    ptimer = new QTimer(this);
    ptimer->setSingleShot(false);
    connect(ptimer, SIGNAL(timeout()), this, SLOT(ProgressTimeout()));

    dir="c:\\";
    ui->lineEditCAddr->setText(dir);
    fileprefix = "PETDATA";
    ui->lineEditCFname->setText(fileprefix);
}
//! 构造探测器
void PETMainWindow::DetectorThreadInit()
{
    int port0 = 8000;
    int port1 = 8001;
    QString name0="PETDATA_DE0";
    QString name1="PETDATA_DE1";
    dr0 = new Detector(this,&dir,&name0,&port0);
    dr1 = new Detector(this,&dir,&name1,&port1);

}
//! 构造指令数据体
void PETMainWindow::CommandInit()
{
    QPair<QStringList,QStringList> d0;
    d0.first      << "CC06020000AA0007" << "CC06020100AA0008"
                  << "CC06020200AA0008" << "CC06020300AA0009"
                  << "CC06020400AA0008" << "CC06020600AA0009"
                  << "CC06020500AA0009" << "CC06020700AA000A";
    d0.second     << "CC06020000000003" << "CC06020100000004"
                  << "CC06020200000004" << "CC06020300000005"
                  << "CC06020400000004" << "CC06020600000005"
                  << "CC06020500000005" << "CC06020700000006";
    command.append(d0);

    QPair<QStringList,QStringList> d1;
    d1.first      << "CC06020001AA0008" << "CC06020101AA0009"
                  << "CC06020201AA0009" << "CC06020301AA000A"
                  << "CC06020401AA0009" << "CC06020601AA000A"
                  << "CC06020501AA000A" << "CC06020701AA000B";
    d1.second     << "CC06020001000004" << "CC06020101000005"
                  << "CC06020201000005" << "CC06020301000006"
                  << "CC06020401000005" << "CC06020601000006"
                  << "CC06020501000006" << "CC06020701000007";
    command.append(d1);
}
//! 连接
void PETMainWindow::on_pushButtonConnect_clicked()
{
    if (ui->pushButtonConnect->text()=="Connect")
    {
        tcpClient->connectToHost(ui->lineEditTcpIP->text(),ui->lineEditTcpPort->text().toInt());
        if (tcpClient->waitForConnected(1000))
        {
            ui->pushButtonConnect->setText("Disconnect");
            ui->textEditRe->append("Connect Successfully");
            ui->groupBoxData->setDisabled(false);
        }
    }
    else
    {
        tcpClient->disconnectFromHost();
        if (tcpClient->state() == QAbstractSocket::UnconnectedState || tcpClient->waitForDisconnected(1000))
        {
            ui->pushButtonConnect->setText("Connect");
            ui->textEditRe->append("Dis Success");
            ui->groupBoxData->setDisabled(true);
        }
    }
}
//! 初始化时钟
void PETMainWindow::on_pushButtonInitClock_clicked()
{
    tcpClient->write(AssistG::HexStrToByteArray("CC070100AA0008"));
}
//! 读TCP数据
void PETMainWindow::ReadTcpData()
{
    QByteArray buffer = tcpClient->readAll();
    if (!buffer.isEmpty())
    {
        if (ui->checkBoxRehex->isChecked())
        {
            ui->textEditRe->append(tr("Receive Data:%1 Time:%2")
                                      .arg(AssistG::ByteArrayToHexStr(buffer)).arg(QTime::currentTime().toString("hh:mm:ss")));
        }
        else
        {
            ui->textEditRe->append(tr("Receive Data:%1 Time:%2")
                                      .arg(QString(buffer)).arg(QTime::currentTime().toString("hh:mm:ss")));
        }
    }
}

void PETMainWindow::ReadTcpError(QAbstractSocket::SocketError)
{
    tcpClient->disconnectFromHost();
    ui->pushButtonConnect->setText("Connect");
    ui->textEditRe->append(tr("Fail to connect to the detector,Reason is: %1").arg(tcpClient->errorString()));
}
//! 开探测器
void PETMainWindow::on_pushButtonPoweron_clicked()
{
   OpenDetector(0);
   OpenDetector(1);
}
//! 关探测器
void PETMainWindow::on_pushButtonPoweroff_clicked()
{
    CloseDetector(0);
    CloseDetector(1);
}
//! 开探测器（底层）
void PETMainWindow::OpenDetector(const int& i)
{
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).first.at(0)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).first.at(1)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).first.at(2)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).first.at(3)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).first.at(4)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).first.at(5)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).first.at(6)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).first.at(7)));
    SetStateLabel(i,"Detector ON");
}
//! 关探测器（底层）
void PETMainWindow::CloseDetector(const int& i)
{
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).second.at(0)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).second.at(1)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).second.at(2)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).second.at(3)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).second.at(4)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).second.at(5)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).second.at(6)));
    tcpClient->write(AssistG::HexStrToByteArray(command.at(i).second.at(7)));
    SetStateLabel(i,"Detector OFF");
}
//! 设置状态标志
void PETMainWindow::SetStateLabel(const int& i,const QString& str)
{
    switch(i)
    {
    case 0:
        ui->labelSd0->setText(str);
        break;
    case 1:
        ui->labelSd1->setText(str);
        break;
    case 2:
        ui->labelSd2->setText(str);
        break;
    case 3:
        ui->labelSd3->setText(str);
        break;
    case 4:
        ui->labelSd4->setText(str);
        break;
    case 5:
        ui->labelSd5->setText(str);
        break;
    case 6:
        ui->labelSd6->setText(str);
        break;
    case 7:
        ui->labelSd7->setText(str);
        break;
    }
}
//! 采集
void PETMainWindow::on_pushButtonCollect_clicked()
{
    //! GET FILENAME PREFIX
    fileprefix = ui->lineEditCFname->text();
    //! GET FILE DIR

    //! GET WORK TIME
    if(ui->comboBoxCTime->currentIndex()==0) {
        timeout = ui->lineEditCTime->text().toInt() * 60000;
    }
    else if(ui->comboBoxCTime->currentIndex()==1) {
        timeout = ui->lineEditCTime->text().toInt() * 1000;
    }
    else if(ui->comboBoxCTime->currentIndex()==2) {
        timeout = ui->lineEditCTime->text().toInt() * 3600000;
    }

    ui->groupBoxData->setDisabled(true);
    timer->start(timeout);
    ptimer->start(100);

    StartDetector();
}
//! 取消
void PETMainWindow::on_pushButtonCancel_clicked()
{
    timer->stop();
    ui->groupBoxData->setDisabled(false);
    StopDetector();
}
//! 采集时钟
void PETMainWindow::CollectTimeout()
{
    ui->groupBoxData->setDisabled(false);
    StopDetector();
}
//! Bar时钟
void PETMainWindow::ProgressTimeout()
{
    CheckThreadState();
    ui->progressBarC->setValue((timeout-timer->remainingTime())/(static_cast<float>(timeout)/100));
    if(!timer->isActive())
    {
        ptimer->stop();
    }
}


//! SAVE CAO FUN
void PETMainWindow::on_pushButtonCAddr_clicked()
{
    dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
    ui->lineEditCAddr->setText(dir);

}
//! 检查状态
void PETMainWindow::CheckThreadState()
{
    if(dr0->isRunning())
        SetStateLabel(0,"Collecting");
    else
        SetStateLabel(0,"Detector On");
    if(dr1->isRunning())
        SetStateLabel(1,"Collecting");
    else
        SetStateLabel(1,"Detector On");
}
//! 开探测器 （底层）
void PETMainWindow::StartDetector()
{
    dr0->SetFileName(QString(ui->lineEditCFname->text()+"_DE0.pet"));
    dr0->SetFileDir(dir+"\\");
    dr0->DetectorStart();
    dr1->SetFileName(QString(ui->lineEditCFname->text()+"_DE1.pet"));
    dr1->SetFileDir(dir+"\\");
    dr1->DetectorStart();
}
//!　关探测器（底层）
void PETMainWindow::StopDetector()
{
    dr0->DetectorStop();
    dr1->DetectorStop();
}


