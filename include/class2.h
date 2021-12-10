//
// Created by 侯轶瑄 on 2021/12/7.
// 文件读写类的实现
//

#ifndef C_LEARNNING_CLASS2_H
#define C_LEARNNING_CLASS2_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
class class2 {
public:
    void write(const char *FileName,const char *Input);     // 向文件中写入字符串
    void Read(const char *FileName, char *File,int length); // 读取文件中的字符串，要事先获取文件长度
    int GetFileLength(const char *FileName);                // 获取文件中字符串的长度
    void GetLineFromFile(const char *FileName, char *File, int length);
};
class RUN_Class2{
public:
    class2 my_class;
    void run_write();   // 测试文件写的功能
    void run_read();    // 测试文件读取的功能
    void run_GetLineFromFile();

};


#endif //C_LEARNNING_CLASS2_H
