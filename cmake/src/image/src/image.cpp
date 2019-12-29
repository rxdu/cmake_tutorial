/* 
 * image.cpp
 * 
 * Created on: Dec 29, 2019 22:52
 * Description: 
 * 
 * Copyright (c) 2019 Ruixiang Du (rdu)
 */

#include "image/image.hpp"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

#include "image_utils.hpp"

using namespace cv;
using namespace std;

void ShowImage(std::string img_full_path)
{
    Mat image;
    image = imread(img_full_path, CV_LOAD_IMAGE_COLOR); // Read the file

    if (!image.data) // Check for invalid input
    {
        PrintImageNoDataWarning();
        return;
    }

    namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.
    imshow("Display window", image);                // Show our image inside it.

    waitKey(0); // Wait for a keystroke in the window
}

void ShowCvImage(cv::Mat image)
{
    if (!image.data) // Check for invalid input
    {
        PrintImageNoDataWarning();
        return;
    }

    namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.
    imshow("Display window", image);                // Show our image inside it.

    waitKey(0); // Wait for a keystroke in the window
}