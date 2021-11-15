//
// Created by 侯轶瑄 on 2021/11/14.
//
#include <iostream>

using namespace std;
void pointer_array_my_test();
int main()
{
    pointer_array_my_test();
    return 0;
}
//void pointer_simple()
//{
//    //1.定义指针变量,定义时需要给指针赋空值
//    int *p = nullptr;
//    //2.获取某元素地址
//    int number=1;
//    p=&number;  // 取地址符
//    //3.检查空指针否
//    if(p)     /* 如果 p 非空，则完成 */
//    if(!p)    /* 如果 p 为空，则完成 */
//}
//void pointer_array()
//{
//    int MAX = 3;
//    // 指针数组：数组的内容为指针
//    int  var[MAX] = {10, 100, 200};
//    int *ptr[MAX];
//
//    for (int i = 0; i < MAX; i++)
//    {
//        ptr[i] = &var[i]; // 赋值为整数的地址
//    }
//    for (int i = 0; i < MAX; i++)
//    {
//        cout << "Value of var[" << i << "] = ";
//        cout << *ptr[i] << endl;
//    }
//}
void pointer_array_my_test()
{
    // 本函数中定义了三个int数组，一个int指针数组，
    int arr1[]={1,2,7};
    int arr2[]={1,2,3,45,5};
    int arr3[] = {23,4,5,6};
    int *p_arr[3];
    // 将三个int数组的指针赋值给指针数组
    p_arr[0] = &arr1[0];
    p_arr[1] = &arr2[0];
    p_arr[2] = &arr3[0];
    // 输出指针数组的每个元素（地址）对应的值
    for (int i = 0; i < 3; ++i) {
        cout << *p_arr[i] <<endl;
    }
    // 输出指针数组第一个元素（一个int数组）的第三个元素的值
    cout << *(p_arr[1]+3) << endl;

}
