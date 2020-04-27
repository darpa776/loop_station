#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QLabel>
#include <QSound> // for music play
/* //failed audio recording
#include <QMediaRecorder>
#include <QUrl>

#include <QAudioProbe>
#include <QAudioRecorder>
#include <QDir>
#include <QFileDialog>*/

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0); //BACKGROUND1
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked(); // guitar

    void on_pushButton_3_clicked(); // drum

    void on_pushButton_4_clicked(); // piano

    void on_pushButton_clicked(); // etc music

    void on_pushButton_5_clicked(); // sound 1

    void on_pushButton_6_clicked(); // sound 2

    void on_pushButton_7_clicked(); // sound 3

    void on_pushButton_8_clicked(); // sound 4

    void on_pushButton_10_clicked(); // sound 5

    void on_pushButton_9_clicked(); //BACKGROUND2


private:

    Ui::MainWindow *ui;
    QPixmap m_img[6]; // 6 image
    int state; // for music

    //QAudioRecorder *audioRecorder = new QAudioRecorder(this);
};

#endif // MAINWINDOW_H
