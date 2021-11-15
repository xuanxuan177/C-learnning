//
// Created by 侯轶瑄 on 2021/11/14.
//
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void simple();
void more();
void pointer_try();
int *getRandom();
int main()
{
    // 一个指向整数的指针
    int *p;

    p = getRandom();
    for ( int i = 0; i < 10; i++ )
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }


    return 0;

}
int *getRandom() //返回值为数组（指针）
{
    static int  r[10];

    // 设置种子
    srand( (unsigned)time( NULL ) );
    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}
void pointer_try()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int *p;
    p=arr;
    cout << "P:\t"<<p << "\t*P:"<<*p << endl;
    cout << "P+1:"<<p+1 << endl;
    cout << "P+2:"<<p+2 << endl;
    cout << "*P:"<<*p << endl;
    cout << "*(P+1):"<<*(p+1) << endl;
    cout << "*(P+2):"<<*(p+2) << endl;
}
void simple()
{
    // 普通数组
    double balance[5] = {1000.0, 2.0, 3.4};
    for (int i = 0; i < 5; ++i)
    {
        cout << balance[i] << endl;
    }
}
void more()
{
    // 多维数组
    // 方法一：
    int a[3][4] = {
            {0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
            {4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
            {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
    };

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
//  总结：
//      1.使用数组元素时：balance[1]；用方括号
//      2.若数组赋值不满（比如定义了一个五个元素的数组，但是只给了3个值）：剩余元素为0
//      3.多维数组的使用方法：a[i][j]
//      4.使用指针代替数组：
//          4.1可以直接p[2]
//          4.2也可以*(p+!)
//      5.函数返回值为数组
    //      5.1首先定义函数时：int *getRandom()
    //      5.2其次，需要返回的数组应该用static定义：static int  r[10];