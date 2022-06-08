#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;



void main() {

    VideoCapture cap(0);
    //VideoWriter out("output.avi", VideoWriter::fourcc('X', 'V', 'I', 'D'), 20.0, Size(480, 640));
    Mat img,gimg,gbimg ,cimg,dimg,eimg;
    while (cap.isOpened())
    {
        cap.read(img);
        cvtColor(img,gimg,COLOR_BGR2GRAY);
        GaussianBlur(img, gbimg, Size(7, 7), 200, 250);
        Canny(gbimg, cimg ,25, 75);
        Mat kernal = getStructuringElement(MORPH_RECT, Size(3, 3));
        dilate(cimg, dimg, kernal);
        erode(dimg, eimg, kernal);
        
        imshow("ImageG",gimg );
        imshow("ImageGB", gbimg);
        imshow("ImageC", cimg);
        imshow("ImageD", dimg);
        imshow("ImageE", eimg);
       
        //out.write(gimg);
        int k =waitKey(20);
        char c = 'q';
        if (k == (int)c) {
            destroyAllWindows();
            break;
        }
    }
    cap.release();
    //out.release();
    destroyAllWindows();
    
    return;

}