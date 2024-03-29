#pragma once
#include <opencv2/core/core.hpp>   //矩阵操作、图像基本结构和算法等
#include <opencv2/imgproc/imgproc.hpp>  //图像处理相关的功能，如滤波、几何变换、边缘检测等
#include <opencv2/highgui/highgui.hpp>  //GUI
#include <math.h>
#include <string>
#include <fmt/core.h>
#include <fmt/format.h>
#include <bitset>  //位操作
#include <vector>  //容器
#include <fstream>  //文件读写
#include <cstdio>  //c语言的输入输出
#include <iostream> //std输入输出流
#include <cstring> //C++ 中处理 C 风格字符串的工具，拼接等操作
#include <algorithm> //在序列上进行操作、排序、查找、比较等，适用于各种容器和数据结构
#include <cstdlib> //程序控制流、内存分配和随机数生成相关的基本工具函数
#include <streambuf> //用于输入输出的缓冲区
#include <memory> //提供了与内存管理和智能指针相关的功能
#include <cmath>//c++中的三角函数、对数、指数、幂运算等
#include <sstream> //它允许将字符串作为流来处理，可以方便地进行字符串的输入和输出操作
#include <iomanip> //格式化输入输出的工具。通过使用 <iomanip>，可以控制输出的格式，例如设置字段宽度、精度、填充字符等。
#include <map>
#include <time.h>
#include <unistd.h>//通常用于操作系统的底层功能，例如进程控制、文件操作、系统调用等。
#include <random>
//添加的，处理数据集
#include <filesystem>
// #define DEBUG_BITS 1 // 开启调试模式
// #define DEBUG_METRICATION 1

#define K  1                                                                       // 近似阈值
#define TEST_PATH "/home/lmk/ApproximateDRAMandSRAM/img/src5.jpeg"      // 测试路径
#define TEST_SAVE_PATH "/home/lmk/ApproximateDRAMandSRAM/img/dst5.jpeg" // 测试保存路径
#define RESULT_SAVE_PATH "/home/lmk/ApproximateDRAMandSRAM/result_img/" // 结果保存路径
#define EXCEL_NAME "/home/lmk/ApproximateDRAMandSRAM/DRAM_Bits.csv"     // excel导出路径
#define RAW_IMAGE_PATH "/home/lmk/ApproximateDRAMandSRAM/lena512.raw"   // raw格式图片路径
#define IMG_NAME "19.jpg"                                                           // 保存的dst名字
#define BITS_8 8                                                                    // 定义使用的bit位数
#define KB_TO_BYTE 1024                                                             // 1KB=1024Byte
#define IMAGE_WIDTH 4032                                                             // 输入图像宽
#define IMAGE_HEIGHT 3024                                                            // 输入图像高
#define PI 3.1415926                                                                // 近似圆周率(DCT使用)
#define ROUNDPOINT 0                                                                // 量化四舍五入保留的小数位
#define VDD 0.60                                                                    // 电源供电电压
#define SRAM64 storageSizekb_64                                                     // SRAM64kb mod
#define SRAM128 storageSizekb_128                                                   // SRAM128kb mod
using namespace cv;
using namespace std;

//特化类模板fmt::formatter--并重新定义两个函数模板，针对std::bitset<8>::reference的解析和格式化输出

template <>
struct fmt::formatter<std::bitset<8>::reference> {
    template <typename ParseContext>
    constexpr auto parse(ParseContext& ctx) {
        // 在这里定义 std::bitset<8>::reference 类型的解析逻辑
        // 可以根据实际情况进行定制
        return ctx.begin();  // 简单地返回起始迭代器，这里需要根据实际需求进行更复杂的解析
    }

    template <typename FormatContext>
    auto format(const std::bitset<8>::reference& value, FormatContext& ctx) {
        // 在这里定义 std::bitset<8>::reference 类型的格式化逻辑
        // 可以根据实际情况进行定制
        return format_to(ctx.out(), "Formatted output for std::bitset<8>::reference: {}", value);
    }
};
