#ifndef PETMAINWINDOW_H
#define PETMAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QUdpSocket>
#include <QTimer>
#include <QDateTime>
#include "AssistG.h"
#include "detector.h"

/*描述：PET采集程序
 *作者：J.Gao
 *时间：2014.7.21
 *备注：时间匆忙，质量不高，有些功能没有实装
*/

namespace Ui {
class PETMainWindow;
}

class PETMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PETMainWindow(QWidget *parent = 0);

    ~PETMainWindow();
    void PanelInit();
    void CommandInit();
    void DetectorThreadInit();
    void OpenDetector(const int&);
    void CloseDetector(const int&);
    void CheckThreadState();

    //扩展时直接在里面加入新探测器
    void StartDetector();
    void StopDetector();


private slots:
    void ReadTcpData();

    void ReadTcpError(QAbstractSocket::SocketError);

    void CollectTimeout();

    void ProgressTimeout();

    void SetStateLabel(const int&,const QString&);

    void on_pushButtonConnect_clicked();

    void on_pushButtonInitClock_clicked();

    void on_pushButtonPoweron_clicked();

    void on_pushButtonPoweroff_clicked();

    void on_pushButtonCollect_clicked();

    void on_pushButtonCancel_clicked();

    void on_pushButtonCAddr_clicked();

private:
    Ui::PETMainWindow *ui;
    QTcpSocket *tcpClient;
    QUdpSocket *udpClient;
    QVector<QPair<QStringList,QStringList>> command;
    QTimer *timer;
    int timeout;
    QTimer *ptimer;
    QString dir;
    QString fileprefix;
    Detector* dr0;
    Detector* dr1;


};

#endif // PETMAINWINDOW_H
