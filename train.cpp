#include <iostream>
#include <stdlib.h>
#include <stdio.h>

//opencv
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/face.hpp>

//file handling
#include <fstream>
#include <sstream>

//header files that contain functions
#include "FaceRec.h"


using namespace std;
using namespace cv;
using namespace cv::face;

int main()
{
	addFace();
	eigenFaceTrainer();

	return 0;
}