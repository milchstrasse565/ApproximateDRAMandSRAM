#include "main.hpp"

cv::Size dsize = Size(IMAGE_WIDTH, IMAGE_HEIGHT); // 图像大小
// cv::Size dsize = Size(28, 28); 
// u_int8_t BinaryTemp[8] = {0};

cv::Mat src = cv::imread(TEST_PATH, IMREAD_GRAYSCALE); // jpeg格式
// cv::Mat src = returnRawData(); // raw格式
cv::Mat dst = Mat ::zeros(dsize, CV_64FC1);
// cv::Mat dst1 = Mat ::zeros(5, 5, CV_8UC1); //测试数组

int main()
{
  // imgPreProcessing(src, dst, dsize);
  // cout << "Original Image:\n" << src << std::endl;
  // std::string image_folder_path = "/media/lmk/DATA14 Pro 128G/class4/FASHION_FC/fashion_image_label/fashion_test_jpg_10000";
  // std::filesystem::path folder_path(image_folder_path);
  // for (const auto& entry : std::filesystem::directory_iterator(folder_path)) {
  //       if (entry.path().extension() == ".jpg") {
  //          // 读取原始图像
  //           cv::Mat src_image = cv::imread(entry.path().string(), cv::IMREAD_GRAYSCALE);
  //           Data_ApproximateProcessing(src_image, dst, dsize);
  //           std::string output_path = "/media/lmk/DATA14 Pro 128G/class4/FASHION_FC/fashion_image_label/testk=1/" + entry.path().filename().string();
  //           cv::imwrite(output_path, dst);
  //       }
  //       }
    //   // 获取图像尺寸
    // int height = src.rows;
    // int width = src.cols;

    // // 打印图像尺寸
    // std::cout << "Image size: " << width << "x" << height << std::endl;
  // imgPreProcessing(src, dst, dsize); // 图片预处理
  // DRAM_ApproximateStorage(src,dst, dsize);
  // DRAM_CompleteApproximateStorage(src, dst, dsize);
  // SRAM_CompleteApproximateStorage(src, dst, dsize);
  SRAM_ApproximateStorage(src, dst, dsize);
  // PSNR_ImgApproximate(src, dst, dsize);
  // PSNR_imgCompression(src, dst, dsize);
  // PSNR_CompleteImgApproximate(src, dst, dsize);
  // imwrite(RESULT_SAVE_PATH +
  //             to_string(PSNR_computing(src, dst)) +
  //             "_" +
  //             to_string(K) +
  //             "_" +
  //             IMG_NAME,
  //         dst);
  // PSNR_VddReductionAndApproximate(src, dst, dsize);
  // imwrite(RESULT_SAVE_PATH + to_string(PSNR_computing(src, dst)) + "_" + to_string((VDD)) + ".jpeg", dst);
  // cv::imshow("rawImage", returnRawData());
  // Data_ApproximateProcessing(src,dst, dsize);
  // cout << "Original Image:\n" << dst << std::endl;
  // cv::imshow("result", dst);
  // cv::waitKey(0);
  return 0;
}
