#ifndef DETECTOR_H
#define DETECTOR_H

#include <QThread>
#include <QUdpSocket>
#include <QFile>
#include <QDebug>

class Detector : public QThread
{
    Q_OBJECT
public:
    Detector(QObject *parent = 0,QString* const dir = NULL,QString* const fname = NULL,int* const port=NULL);
    void run();
    void DetectorStart();
    void DetectorStop();

    void SetFileName(const QString&);
    void SetFileDir(const QString&);


private:
    QString filename;
    QString filedir;
    int udpPort;
    bool orRunning;

signals:

public slots:



};

#endif // DETECTOR_H
