//
// Created by 侯轶瑄 on 2021/11/15.
//

#include "CommenFunction.h"

template <class T>

int getArrayLen(T& array)   //获取数组长度

{

    return (sizeof(array) / sizeof(array[0]));

}
