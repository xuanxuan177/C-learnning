//
//  查看 int, float, double 和 char 变量大小
//

#include <iostream>
using namespace std;

int main()
{
    cout << "char: " << sizeof(char) << " 字节" << endl;
    cout << "int: " << sizeof(int) << " 字节" << endl;
    cout << "float: " << sizeof(float) << " 字节" << endl;
    cout << "double: " << sizeof(double) << " 字节" << endl;

    return 0;
}
