#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

//void main() {
//
//    string path = "Resources/test.png";
//    Mat img = imread(path);
//    imshow("Image", img);
//    imwrite("test_copy.png", img);
//    int k = waitKey(0);
//    char c = 's', d = 'a';
//    if(k==(int) d)
//    destroyAllWindows();
//    else if (k == (int)c)
//    {
//        imwrite("test_copy.png", img);
//        destroyAllWindows();
//    }
//    
//
//}

////////////////////video//////////////////

//void main()
//{
//	string path = "Resources/test_video.mp4";
//	VideoCapture cap(path);
//	Mat img;
//	while (1)
//	{
//		cap.read(img);
//		imshow("Video", img); 
//		waitKey(1);
//	}
//}


void main()
{
	VideoCapture cap(0);
	Mat img;
	while (1)
	{
		cap.read(img);
		imshow("Video", img);
		int k = waitKey(1);
		char c = 'q';
		if (k == (int)c)
			break;
	}
	cap.release();
	destroyAllWindows();
}