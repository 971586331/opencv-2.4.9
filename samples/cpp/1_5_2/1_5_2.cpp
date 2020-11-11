
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    Mat srcimage = imread("timg.jpg");
    imshow("src", srcimage);

    Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
    Mat dstimage;
    erode(srcimage, dstimage, element);
    imshow("dst", dstimage);

    waitKey(0);

    return 0;
}