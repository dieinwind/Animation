#ifndef ANIMATION_H
#define ANIMATION_H

#include <iostream>
#include <iomanip>

#include <QtWidgets/QMainWindow>
#include "ui_animation.h"
#include <QToolTip>
#include <QMouseEvent>
#include <QDebug>
#include <QPainter>
#include <QPaintEvent>
#include <QWhatsThis>
#include <QPen>
#include <QPixmap>
#include <QBitmap>
#include <QTimer>

#include <nuitrack/Nuitrack.h>

using namespace tdv::nuitrack;

class Animation : public QMainWindow
{
	Q_OBJECT

public:
	Animation(QWidget *parent = 0);
	~Animation();
	void Animation::paintEvent(QPaintEvent *);

private slots:
	void NuitrackUpdate();

private:



	//void onHandUpdate(HandTrackerData::Ptr handData);


	QPoint offset;//储存鼠标指针位置与窗口位置的差值
	
	Ui::AnimationClass ui;
	QPixmap hand_img;
	QTimer* timer;
	HandTracker::Ptr handTracker;
	DepthSensor::Ptr depthSensor;
	//void onHandUpdate(HandTrackerData::Ptr handData);
	
};

#endif // ANIMATION_H
