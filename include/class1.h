//
// Created by 侯轶瑄 on 2021/12/3.
// 功能：
    //1。打印二维数组
    // 2。二维数组转置
    // 3。获取指定纬度的随机二维数组
    // 4。获取随机一维数组
    // 5。获取随机数
#ifndef C_LEARNNING_CLASS1_H
#define C_LEARNNING_CLASS1_H
#include <iostream>
#include <cstdlib>
using namespace std;
class ONE {
public:

    void Print2Arr(int **mat, int row, int col);                    //打印二维数组
    int** Transposition2Arr(int **mat, int row, int col);           // 二维数组转置
    int** GetRand2Mat(int row, int col, unsigned int seed=31415);   // 获取指定纬度的随机二维数组
    int* GetRandArray(int num);                                     // 获取随机一维数组
    int GetRandNum(int max = 10, int min = 0);                      // 获取随机数
};
class GetType{
public:
    // 用于获取数据类型，返回值为：
        // 1：int
        // 2:float
        // 3:double
        // 4:int*
        // 5:float*
        // 6:double*
        // 7:string
    int get_type(int a);
    int get_type(float a);
    int get_type(double a);

    int get_type(int *a);
    int get_type(float *a);
    int get_type(double *a);

    int get_type(string a);

    void print_type(int num);    //打印返回值对应的类型
};


class RUN_ONE{
    // 运行ONE中的功能函数
public:
    ONE my_class;
    GetType get;
    void run_GetRandArray();
    void run_Print2Arr();
    void run_GetRand2Mat();
    void run_Transposition2Arr();
    void run_get_type();
};


#endif //C_LEARNNING_CLASS1_H
