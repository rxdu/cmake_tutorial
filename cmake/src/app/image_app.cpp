#include <iostream>
#include "image/image.hpp"

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        cout << " Usage: image_app ImageToLoadAndDisplay" << endl;
        return -1;
    }

    ShowImage(argv[1]);

    return 0;
}