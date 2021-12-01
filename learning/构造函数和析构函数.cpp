//
// Created by 侯轶瑄 on 2021/11/28.
//
#include <iostream>

using namespace std;

class BOX
{
public:
    BOX();
    ~BOX();
    int printi();
};
BOX::BOX() {
    cout << "use 1" << endl;
}
BOX::~BOX() {
    cout << "use 2" << endl;
}

int BOX::printi() {
    printf("1234");
}


int main()
{
    struct apple
    {
        int daxiao;
        string app;

    };
    BOX box;    // 1。正常方式使用类，调用构造+析构函数
    BOX* mybox = new BOX;       // 2。只调用构造函数
    delete mybox;               // 3。只调用析构函数
    apple apple1;
    apple1.daxiao=1;
    cout << apple1.daxiao;
    BOX *box1;
    *box1 = box;
    box1->printi()


}
