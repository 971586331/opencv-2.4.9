
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    Mat srcimage = imread("timg.jpg");
    imshow("src", srcimage);

    Mat dstimage;
    blur(srcimage, dstimage, Size(7, 7));
    imshow("dst", dstimage);

    waitKey(0);

    return 0;
}