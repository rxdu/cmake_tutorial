#include <iostream>
#include "image/image.hpp"

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        cout << " Usage: cvimage_app ImageToLoadAndDisplay" << endl;
        return -1;
    }

    Mat image;
    image = imread(argv[1], CV_LOAD_IMAGE_COLOR); // Read the file

    ShowCvImage(image);

    return 0;
}