#include <opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(int argsc, char** args)
{
	Mat src = imread("C:/Users/djm/Pictures/Saved Pictures/HonKai StarRail/Í£ë….jpg");
	imshow("input", src);
	waitKey(0);
	destroyAllWindows();
	return 0;
}