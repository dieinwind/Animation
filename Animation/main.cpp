#include "animation.h"
#include <QtWidgets/QApplication>


// Callback for the hand data update event
void onHandUpdate(HandTrackerData::Ptr handData)
{

	auto userHands = handData->getUsersHands();

	auto rightHand = userHands[0].rightHand;

	//point = QPointF(rightHand->xReal, rightHand->yReal);
	//scale = rightHand->zReal;

}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Animation w;

	//init Nuitrack
	std::cout << "FUCK" << endl;
	try
	{
		std::string configPath = "C:/Program Files/nuitrack/data/nuitrack.config";
		Nuitrack::init(configPath);
	}
	catch (const Exception& e)
	{
		std::cerr << "Can not initialize Nuitrack (ExceptionType: " << e.type() << ")" << std::endl;
		//return EXIT_FAILURE;
	}
	try
	{
		auto depthSensor = DepthSensor::create();
	}

	catch (const Exception& e)
	{
		std::cerr << "Can not create DepthSensor (ExceptionType: " << e.type() << ")" << std::endl;
		//return EXIT_FAILURE;
	}

	auto _userTracker = UserTracker::create();
	auto _skeletonTracker = SkeletonTracker::create();
	// created automatically
	auto handTracker1 = HandTracker::create();
	// Connect onHandUpdate callback to receive hand tracking data
	handTracker1->connectOnUpdate(onHandUpdate);

	// Start Nuitrack
	try
	{
		Nuitrack::run();
	}
	catch (const Exception& e)
	{
		std::cerr << "Can not start Nuitrack (ExceptionType: " << e.type() << ")" << std::endl;
		//return EXIT_FAILURE;
	}

	w.show();
	return a.exec();
}
