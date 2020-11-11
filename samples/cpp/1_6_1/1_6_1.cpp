
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
    // VideoCapture capture("test.avi");
    VideoCapture capture(0);
    while(1)
    {
        Mat frame;
        capture >> frame;
        imshow("video", frame);
        waitKey(30);
    }

    return 0;
}