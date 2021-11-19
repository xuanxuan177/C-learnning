//
// Created by 侯轶瑄 on 2021/11/16.
//
//  构造函数 ：在每次创建类的新对象时执行。可用于为某些成员变量设置初始值。
#include <iostream>

using namespace std;

class Line
{
public:
    void setLength( double len );
    double getLength( void );
    Line(double len);  // 这是构造函数

private:
    double length;
};

// 成员函数定义，包括构造函数
Line::Line( double len)
{
    cout << "Object is being created, length = " << len << endl;
    length = len;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}
// 程序的主函数
int main( )
{
    Line line(10.0);

    // 获取默认设置的长度
    cout << "Length of line : " << line.getLength() <<endl;
    // 再次设置长度
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() <<endl;

    return 0;
}
//初始化列表来初始化字段
    //假设有一个类 C，具有多个字段 X、Y、Z 等需要进行初始化，同理地，您可以使用上面的语法，只需要在不同的字段使用逗号进行分隔，如下所示：
        //C::C( double a, double b, double c): X(a), Y(b), Z(c)
        //{
        //    ....
        //}