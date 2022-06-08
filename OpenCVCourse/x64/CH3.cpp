#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;



void main() {

 

    Mat img  =  imread("Resources/test.png"),rimg,cimg;
    cout << img.size();
    resize(img, rimg, Size(640, 480));
    Rect roi(100, 100, 300, 100);   //  (x,y,widht,hight)
    cimg = img(roi); 
    imshow("Image", img);
    imshow("ImageR", rimg);
    imshow("ImageC", cimg);

    int k = waitKey(0);
    if (k == 97)
        destroyAllWindows();
    destroyAllWindows();

}