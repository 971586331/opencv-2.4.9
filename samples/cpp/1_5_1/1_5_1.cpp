
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    Mat srcimage = imread("timg.jpg");
    imshow("src", srcimage);
    waitKey(0);

    return 0;
}