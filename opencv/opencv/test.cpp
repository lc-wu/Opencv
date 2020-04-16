#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
int main()
{
	Mat src = imread("F:/program/Opencv_learning/th.jpg");
	namedWindow("test", WINDOW_AUTOSIZE);
	imshow("test", src);
	waitKey(0);
	return 0;
}