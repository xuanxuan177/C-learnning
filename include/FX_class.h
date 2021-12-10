//
// Created by 侯轶瑄 on 2021/12/9.
//

#ifndef C_LEARNNING_FX_CLASS_H
#define C_LEARNNING_FX_CLASS_H
#include <iostream>
template<class T>
using namespace std;
namespace first_namespace{
class FX_class {
public:
    void print();
};
}
namespace second_namespace{
    class class2{
    public:
        void print();
    };
}
namespace FX{
    template<class T>
    class FX_class {
    public:
        template <typename T1>
        T1 const& Max (T1 const& a, T1 const& b)
        {
            return a < b ? b:a;
        }
    };
}
namespace RUN{
    class run{
    public:
        void run_print();
        first_namespace::FX_class class1;
        second_namespace::class2 class2;
        FX::FX_class class3;
    };
}

#endif //C_LEARNNING_FX_CLASS_H
