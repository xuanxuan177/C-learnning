//
// Created by 侯轶瑄 on 2021/11/14.
//enum 枚举名{
//     标识符[=整型常数],
//     标识符[=整型常数],
//...
//    标识符[=整型常数]
//} 枚举变量;
//

#include<iostream>
using namespace std;
int main()
{
    enum color { red=3, green=5, blue } c;  //枚举的意义在于告诉c只能取这几个值
    c = red;
    cout << c;  //此时输出的c的值为6，因为比green大一；但是red的值若不设置则为0
}

