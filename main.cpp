#include <iostream>
#include <CommenFunction.h>
#include "class1.h"
#include "class2.h"
#include "FX_class.h"
using namespace std;



int main() {
    int arr[121];
    int len;
    get1 get1;
    len = get1.getArrayLen(arr);
    cout << len << endl;

    return 0;
}
