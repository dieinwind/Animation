#include "animation.h"

QPointF point;
int scale;


Animation::Animation(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	

	hand_img = QPixmap();
	hand_img.load("hand.jpg");
	scale = 100;
	timer = new QTimer(this);
	timer->start(500);
	connect(timer, SIGNAL(timeout()), this, SLOT(NuitrackUpdate()));//定时器溢出关联NuitrackUpdate()函数


}

Animation::~Animation()
{

}

void Animation::NuitrackUpdate()
{
	int errorCode = EXIT_SUCCESS;
	try
	{
		// Wait for new hand tracking data
		Nuitrack::waitUpdate(handTracker);
	}
	catch (const Exception& e)
	{
		std::cerr << "Nuitrack update failed (ExceptionType: " << e.type() << ")" << std::endl;
		errorCode = EXIT_FAILURE;
	}
	update();
}

void Animation::paintEvent(QPaintEvent *)
{
	QPainter painter(this);
	qreal width = hand_img.width(); //获得以前图片的宽和高
	qreal height = hand_img.height();
	//hand_img = hand_img.scaled(width*0.5, height*0.5, Qt::KeepAspectRatio);
	ui.label_x->setText(QString::number(point.x()));
	ui.label_y->setText(QString::number(point.y()));
	ui.label_s->setText(QString::number(scale));

	painter.drawPixmap(point.x(), point.y(), scale, scale,  hand_img);
}



