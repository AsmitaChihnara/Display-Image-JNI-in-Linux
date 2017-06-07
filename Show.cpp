#include <jni.h>
#include "Show.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

JNIEXPORT void JNICALL Java_Show_showImage (JNIEnv * env, jobject jobj, jstring loc)
{
	const char *locs = env->GetStringUTFChars(loc, JNI_FALSE);
	Mat image;
    	image = imread(locs, CV_LOAD_IMAGE_COLOR);   // Read the file

    	if(! image.data )                              // Check for invalid input
    	{
        	cout <<  "Could not open or find the image" << std::endl ;
    	}

    	namedWindow( "Display window", WINDOW_AUTOSIZE );// Create a window for display.
    	imshow( "Display window", image );                   // Show our image inside it.

    	waitKey(0);   
}
