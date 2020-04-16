#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argv, char** argc)
{
	using namespace cv;
	Mat src = imread("F:/program/Opencv_learning/th.jpg");
	namedWindow("test", CV_WINDOW_AUTOSIZE);
	imshow("test", src);
	waitKey(0);

	return 0;
}