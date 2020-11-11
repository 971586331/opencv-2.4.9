
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
    Mat srcimage = imread("timg.jpg");
    imshow("src", srcimage);

    Mat dstimage, edge, grayimage;
    dstimage.create( srcimage.size(), srcimage.type() );

    cvtColor(srcimage, grayimage, CV_BGR2GRAY);

    blur(grayimage, edge, Size(3, 3));
    Canny( edge, edge, 3, 9, 3 );
    imshow("dst", edge);

    waitKey(0);

    return 0;
}