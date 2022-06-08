#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;



void main() {

    Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));
    circle(img, Point(256, 256), 128, Scalar(0,255, 255), FILLED);
    circle(img, Point(210, 210), 22, Scalar(0, 0,0), FILLED);
    circle(img, Point(302, 210), 22, Scalar(0, 0, 0), FILLED);
    rectangle(img, Point(200, 302), Point(312, 322), Scalar(0, 0, 0), FILLED);
    putText(img, "Expressionless Face", Point(88, 450), FONT_HERSHEY_PLAIN, 2, Scalar(0, 255, 0), 2);
    line(img, Point(88, 480), Point(420, 480), Scalar(0, 0, 255), 2);
    imshow("Image", img);
    imwrite("emoji.png", img);


    int k = waitKey(0);
    if (k == 97)
        destroyAllWindows();
    destroyAllWindows();

}