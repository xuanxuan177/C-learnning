//
// Created by 侯轶瑄 on 2021/11/14.
//
#include <iostream>
#include "../include/CommenFunction.h"
using namespace std;
int main()
{
    double *p;  // 定义一个用于储存double类型的指针，名为P
    double array[10]={50.0,45};
    for (int i = 0; i < 5; ++i) {
        array[i]=3.0;
    }

    p = array;
    cout << p[1] << endl;
    int length;
    length = IntArrayLenth(p);
    cout << length << endl;
}
