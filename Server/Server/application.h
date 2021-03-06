/*---------------------------------------------------------------------------------------
--	SOURCE FILE:	application.h -		Header file for application.cpp ui class
--                                      Contains function headers.
--
--	PROGRAM:		Server
--
--
--	DATE:			February 9, 2015
--
--	DESIGNERS:		Filip Gutica & Auto-generated
--
--	PROGRAMMER:		Filip Gutica & Auto-generated
--
--	NOTES:
--
---------------------------------------------------------------------------------------*/
#ifndef APPLICATION_H
#define APPLICATION_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QStringListModel>
#include <QDirIterator>
#include <QAudioFormat>
#include <QAudioInput>
#include <QAudioOutput>
#include <list>
#include "server.h"
#include "audioplayer.h"


namespace Ui {
class Application;
}

class Application : public QMainWindow
{
    Q_OBJECT

public:
    explicit Application(QWidget *parent = 0);
    ~Application();
    void appendToLog(QString str);

private slots:
    void on_pushButton_clicked();
    void on_actionConfigure_triggered();

    void on_playList_doubleClicked(const QModelIndex &index);

private:
    Ui::Application *ui;
    QVector<QString> fileList;
    void loadPlaylist();
    void updatePlaylist();

signals: // Custom signal for appending to the QTextBrowser widget
    void valueChanged(QString);
};

#endif // APPLICATION_H
