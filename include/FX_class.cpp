//
// Created by 侯轶瑄 on 2021/12/9.
//

#include "FX_class.h"
void first_namespace::FX_class::print() {
    cout << "This is the first"<< endl;
}

void second_namespace::class2::print() {
    cout << "this is the second"<< endl;
}

void RUN::run::run_print() {
    class1.print();
    class2.print();
}