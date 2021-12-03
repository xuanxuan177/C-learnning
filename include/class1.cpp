//
// Created by 侯轶瑄 on 2021/12/3.
//

#include "class1.h"

void ONE::one() {
    int mat1[col][row];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
           mat1[j][i] = mat[i][j];
           cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < col; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << mat1[i][j] << " ";
        }
        cout<<endl;
    }


}
