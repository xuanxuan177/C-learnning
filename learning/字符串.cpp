//
// Created by 侯轶瑄 on 2021/11/15.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    const char apple[2];
    apple[0]='1';
    cout << apple[1] <<endl;
    return 0;
}
void C_char()
{
    // c语言风格字符串定义形式：简言之，当作数组,但是与数组不同的是，不能先定义后赋值
    // 若字符填不满数组，则剩余的字符均为空(不是空格)
    char string1[10]={'a','b'};
    // 方法二：直接赋值字符串
    char site[] = "RUNOOB";
    // 可以通过类似数组赋值的方式改变字符串的值
    string1[2]='2';
    // 可以通过将字符串赋值给指针，但是不可以直接给指针一个字符串，需要现有一个字符串数组再赋值给指针
    char *string2;
    string2=site;
    cout << string1 <<"🤔"<<site <<string2<<endl;
}
void C_char_func()
{
    char str1[13] = "runoob";
    char str2[13] = "google";
    char str3[13];
    int  len ;

    // 复制 str1 到 str3
    strcpy( str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;

    // 连接 str1 和 str2
    strcat( str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;

    // 连接后，str1 的总长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
}
void C_String()
{
    string str1 = "runoob";
    string str2 = "google";
    string str3;
    int  len ;

    // 复制 str1 到 str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;

    // 连接 str1 和 str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;

    // 连接后，str3 的总长度
    len = str3.size();
    cout << "str3.size() :  " << len << endl;

    return 0;
}