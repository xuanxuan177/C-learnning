#include <iostream>
#include "CommenFunction.h"

using namespace std;



int main() {
    double arr[3]={100.0,120};
    int length;
    length = getArrayLen(arr);
    cout << length <<endl;
    return 0;
}
