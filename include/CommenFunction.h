//
// Created by 侯轶瑄 on 2021/11/15.
//

#ifndef C_LEARNNING_COMMENFUNCTION_H
#define C_LEARNNING_COMMENFUNCTION_H

template <class T>
int GetArrayLen(T& array)   //获取数组长度
{
    return (sizeof(array) / sizeof(array[0]));
}
#endif //C_LEARNNING_COMMENFUNCTION_H
