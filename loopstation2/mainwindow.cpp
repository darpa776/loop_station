#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

  /*QAudioEncoderSettings *settings; //failed audio recorder
    settings->setCodec(boxValue(ui->audioCodecBox).toString());
    settings->setSampleRate(boxValue(ui->sampleRateBox).toInt());
    settings->setBitRate(boxValue(ui->bitrateBox).toInt());
    settings->setQuality(QMultimedia::EncodingQuality(ui->qualitySlider->value()));
    settings->setEncodingMode(ui->constantQualityRadioButton->isChecked() ?
                            QMultimedia::ConstantQualityEncoding :
                            QMultimedia::ConstantBitRateEncoding);

    QString container = boxValue(ui->containerBox).toString();

    audioRecorder->setEncodingSettings(settings, QVideoEncoderSettings(), container);
    audioRecorder->record();

     ui->statusbar->showMessage(tr("Recorded %1 sec").arg(duration / 1000)); */

    // load back groud image
    m_img[0].load("/home/pi/loopstation2/00start_background.png");
    m_img[1].load("/home/pi/loopstation2/01start loop.JPG");
    m_img[2].load("/home/pi/loopstation2/10guitar.jpg");
    m_img[3].load("/home/pi/loopstation2/11drum.jpg");
    m_img[4].load("/home/pi/loopstation2/12piano.jpg");
    m_img[5].load("/home/pi/loopstation2/13trumpet.jpg");
    m_img[6].load("/home/pi/loopstation2/03finished loop.JPG");

    int w = ui->label->width(); // width of ui label
    int h = ui->label->height(); // height of ui label

    ui->label-> setPixmap(m_img[0].scaled(w,h,Qt::KeepAspectRatio)); // set backgroud img
    state = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked() //base
{
    int w = ui->label->width();
    int h = ui->label->height();

    ui->label-> setPixmap(m_img[2].scaled(w,h,Qt::KeepAspectRatio));

    state = 1;
}

void MainWindow::on_pushButton_3_clicked() //drum
{
    int w = ui->label->width();
    int h = ui->label->height();

    ui->label-> setPixmap(m_img[3].scaled(w,h,Qt::KeepAspectRatio));

    state = 2;
}

void MainWindow::on_pushButton_4_clicked() //piano
{
    int w = ui->label->width();
    int h = ui->label->height();

    ui->label-> setPixmap(m_img[4].scaled(w,h,Qt::KeepAspectRatio));
    /*piano1 ->  show(); //failed QMediaPlayer
    piano1 -> move(w/2,h/4);
    QMediaPlayer *player = new QMediaPlayer;
    player -> setMedia(QUrl::fromLocalFile("/home/pi/loopstation2/a2.wav"));
    player -> setVolume(50);
    player -> play(); */

    state = 3;
}

void MainWindow::on_pushButton_clicked() // etc
{
    int w = ui->label->width();
    int h = ui->label->height();

    ui->label-> setPixmap(m_img[5].scaled(w,h,Qt::KeepAspectRatio));

    state = 4;
}

void MainWindow::on_pushButton_5_clicked() // first button click
{
    if(state==1){QSound::play("/home/pi/loopstation2/basse1.wav");}
    if(state==2){QSound::play("/home/pi/loopstation2/match0.wav");}
    if(state==3){QSound::play("/home/pi/loopstation2/piano1.wav");}
    if(state==4){QSound::play("/home/pi/loopstation2/beat.wav");}
}

void MainWindow::on_pushButton_6_clicked() // second button click
{
    if(state==1){QSound::play("/home/pi/loopstation2/basse2.wav");}
    if(state==2){QSound::play("/home/pi/loopstation2/match1.wav");}
    if(state==3){QSound::play("/home/pi/loopstation2/piano2.wav");}
    if(state==4){QSound::play("/home/pi/loopstation2/buzzer.wav");}
}

void MainWindow::on_pushButton_7_clicked() // third button click
{
    if(state==1){QSound::play("/home/pi/loopstation2/basse1.wav");}
    if(state==2){QSound::play("/home/pi/loopstation2/match2.wav");}
    if(state==3){QSound::play("/home/pi/loopstation2/piano3.wav");}
    if(state==4){QSound::play("/home/pi/loopstation2/music.wav");}
}

void MainWindow::on_pushButton_8_clicked() // fourth button click
{
    if(state==1){QSound::play("/home/pi/loopstation2/basse2.wav");}
    if(state==2){QSound::play("/home/pi/loopstation2/match3.wav");}
    if(state==3){QSound::play("/home/pi/loopstation2/piano4.wav");}
    if(state==4){QSound::play("/home/pi/loopstation2/trumpet.wav");}
}

void MainWindow::on_pushButton_10_clicked() // fifth button click
{
    if(state==1){QSound::play("/home/pi/loopstation2/basse1.wav");}
    if(state==2){QSound::play("/home/pi/loopstation2/match4.wav");}
    if(state==3){QSound::play("/home/pi/loopstation2/piano5.wav");}
    if(state==4){QSound::play("/home/pi/loopstation2/temp.wav");}
}


void MainWindow::on_pushButton_9_clicked() // back groud push button
{
    if(state==0){
         int w = ui->label->width();
         int h = ui->label->height();

         ui->label-> setPixmap(m_img[1].scaled(w,h,Qt::KeepAspectRatio));
    }
    else{
        int w = ui->label->width();
        int h = ui->label->height();

        ui->label-> setPixmap(m_img[0].scaled(w,h,Qt::KeepAspectRatio));

    }
}

