#include "detector.h"

Detector::Detector(QObject *parent,QString* const dir,QString* const fname,int* const port) :
    QThread(parent)
{
    filename = *fname;
    filedir = *dir;
    udpPort = *port;
    orRunning = true;
}

void Detector::DetectorStart()
{
    orRunning = true;
    this->start();
}

void Detector::DetectorStop()
{
    orRunning = false;
}



void Detector::run()
{
    QUdpSocket udpSocket;
    udpSocket.bind(QHostAddress("192.168.1.110"), udpPort, QUdpSocket::ReuseAddressHint);
    while(orRunning)
    {
        if (udpSocket.hasPendingDatagrams())
        {
                QByteArray datagram;
                datagram.resize(udpSocket.pendingDatagramSize());
                QHostAddress sender;
                quint16 senderPort;
                udpSocket.readDatagram(datagram.data(), datagram.size(),
                                        &sender, &senderPort);
                //qDebug()<<"A";

                QFile file(filedir+filename);
                    if (!file.open(QIODevice::WriteOnly|QIODevice::Append))
                        return;
                file.write(datagram);
        }
    }
}

void Detector::SetFileName(const QString& str)
{
    filename = str;
}
void Detector::SetFileDir(const QString& str)
{
    filedir = str;
}
