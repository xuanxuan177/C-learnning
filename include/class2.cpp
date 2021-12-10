//
// Created by 侯轶瑄 on 2021/12/7.
//

#include "class2.h"
/*以下为功能函数板块*/
void class2::write(const char *FileName,const char *Input) {
    //创建一个 fstream 类对象
    fstream infile(FileName, ios::app);
    if (!infile) { //打开失败
        cout << "打开失败" << endl;
    }
    infile << Input ;
    infile.close();
}
void class2::Read(const char *FileName,char *File,int length){
    ifstream outfile;
    outfile.open(FileName,ios::in);
    if (!outfile) { //打开失败
        cout << "打开失败" << endl;
    }
    outfile.read(File,length);
    outfile.close();
}
void class2::GetLineFromFile(const char *FileName,char*File,int length){
    ifstream out(FileName,ios::in);
    if(!out){
        cout << "打开失败"<< endl;
    }
    out.getline(File,length);
    out.close();

}
int class2::GetFileLength(const char *FileName){
    // 获取要读取的文件的长度
    ifstream outfile;
    outfile.open(FileName,ios::in);
    outfile.seekg(0,outfile.end);
    int length = outfile.tellg();
    outfile.seekg(0,outfile.beg);
    outfile.close();
    return length;
}

/*以下为测试板块*/
void RUN_Class2::run_write() {

    const char *IN = "This is the first \n this is the second";
    my_class.write("t1.txt",IN);
}
void RUN_Class2::run_read() {
    // 文件地址
    const char *FilePath = "/Users/houyixuan/Documents/200-编程/132.6代码/C_Learn/C_learnning/cmake-build-debug/a.txt";

    int length; // 用于储存文件中字符的长度
    length = my_class.GetFileLength(FilePath);  // 获取文件字符串长度
    char data[length];  // 依据文件中字符串长度定义字符串数组
    my_class.Read(FilePath,data,length);    // 从文件中读取全部字符，赋值给输入参数（data）
    // 打印文件内容：
    for (int i = 0; i < length; ++i) {
        cout << data[i];
    }
}
void RUN_Class2::run_GetLineFromFile(){
    const char *FilePath = "/Users/houyixuan/Documents/200-编程/132.6代码/C_Learn/C_learnning/cmake-build-debug/a.txt";

    int length= 9; // 用于储存文件中字符的长度
    char data[length];  // 依据文件中字符串长度定义字符串数组
    my_class.GetLineFromFile(FilePath,data,length);    // 从文件中读取全部字符，赋值给输入参数（data）
    // 打印文件内容：
    for (int i = 0; i < length; ++i) {
        cout << data[i];
    }
}











