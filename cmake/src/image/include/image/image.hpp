/* 
 * image.hpp
 * 
 * Created on: Dec 29, 2019 22:52
 * Description: 
 * 
 * Copyright (c) 2019 Ruixiang Du (rdu)
 */ 

#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <string>
#include <opencv2/opencv.hpp>

void ShowImage(std::string img_full_path);
void ShowCvImage(cv::Mat image);

#endif /* IMAGE_HPP */
