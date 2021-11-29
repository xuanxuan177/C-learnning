//
// Created by 侯轶瑄 on 2021/11/23.
//
#include <iostream>
using namespace std;

#define ARRAY_LEN(array, length){ length =  sizeof(array) / sizeof(array[0]); }

class My_List
{

public:
    double PrintListFirst(double *list);    // 打印并返回list的首元素
    template <class T>
    int GetArrayLen(T &array)      // 获取数组的长度
    {
        int num;
        num = end(array)- begin(array);
        cout << num<< endl;
        return sizeof(array) / sizeof(array[0]);
    }

};
//int My_List::GetArrayLen(T &array)
//{
//
//return sizeof(array) / sizeof(array[0]);
//
//}
double My_List::PrintListFirst(double *list)
{
    cout << list[0] << endl;
    return list[0];
}

//double My_List::GetListLen(double array[])
//{
//    return (sizeof(array) / sizeof(array[0]));
//}


int main()
{

    double num1[10] = {2,2,3,4};
    My_List myList;
    int len;
    len = myList.GetArrayLen(num1);
    cout << len << endl;


}