//
// Created by 侯轶瑄 on 2021/12/3.
//

#include "class1.h"


void ONE::Print2Arr(int **mat, int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << mat[i][j] << ",";
        }
        cout << endl;
    }

}   //打印二维数组
int **ONE::Transposition2Arr(int **mat, int row, int col) {
    // 输入二维数组，行数，列数
    // 定义新的二维矩阵,并分配空间：
    int **new_mat = nullptr;
    new_mat = new int *[col];
    for (int i = 0; i < col; ++i) {
        new_mat[i] = new int[row];
    }
    // 转置
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            new_mat[j][i] = mat[i][j];

        }
    }
    return new_mat;
}   //输入二维数组以及行列数，返回转置后的二维数组（成功）
int **ONE::GetRand2Mat(int row, int col, unsigned int seed) {
    srand(seed);    // 设置随机数种子，默认为31415

    // 为二维数组分配空间：
    int **mat = nullptr;
    mat = new int *[row];
    for (int i = 0; i < row; ++i) {
        mat[i] = new int[col];
    }
    // 赋值：
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            mat[i][j] = GetRandNum();
        }
    }

    return mat;
}    // 生成随机二维数组（成功）
int *ONE::GetRandArray(int num) {

    static int *mat;
    mat = new int[num];
    for (int i = 0; i < num; ++i) {
        mat[i] = GetRandNum();
        cout << "in box :" << mat[i] << endl;
    }
    static int *p_mat;
    p_mat = mat;
    return p_mat;
}   // 获取随机一维数组（成功）
int ONE::GetRandNum(int max, int min) {
    int RandNum = (rand() % max - min + 1) + min;
    return RandNum;
}   // 获取一个随机数（成功）

// GetType类实现
int GetType::get_type(int a) {
    return 1;
}

int GetType::get_type(float a) {
    return 2;
}

int GetType::get_type(double a) {
    return 3;
}

int GetType::get_type(int *a) {
    return 4;
}

int GetType::get_type(float *a) {
    return 5;
}

int GetType::get_type(double *a) {
    return 6;
}

int GetType::get_type(string a) {
    return 7;
}

void GetType::print_type(int num) {
    string str_type;
    switch (num) {
        case 1:
            str_type = "int";
        case 2:
            str_type = "float";
        case 3:
            str_type = "double";
        case 4:
            str_type = "int*";
        case 5:
            str_type = "float*";
        case 6:
            str_type = "double*";
        case 7:
            str_type = "string";
    }
//    if (num == 1) {
//        str_type = "int";
//    } else if (num == 2) {
//        str_type = "float";
//    } else if (num == 3) {
//        str_type = "double";
//    } else if (num == 4) {
//        str_type = "int*";
//    } else if (num == 5) {
//        str_type = "float*";
//    } else if (num == 6) {
//        str_type = "double*";
//    } else if (num == 7) {
//        str_type = "string";
//    }
    cout << "the number you have input means :"<< str_type << endl;
}

#pragma region 完成的

void RUN_ONE::run_GetRandArray() {

    int num = 3;
    int *mat;
    mat = my_class.GetRandArray(num);
    for (int i = 0; i < num; ++i) {
        cout << "mat" << "[" << i << "]" << mat[i] << endl;
    }   // 运行获取一维随机数组
}   // 运行：：获取随机一维数组（成功）
void RUN_ONE::run_Print2Arr() {
    int mat[3][2] = {1, 2, 3, 4, 5, 6};
    int *mat1[3];
    for (int i = 0; i < 3; ++i) {
        mat1[i] = mat[i];
    }
    int **mat2;
    mat2 = mat1;
    my_class.Print2Arr(mat2, 3, 2);
}   // 运行：：打印二维数组（成功）
void RUN_ONE::run_GetRand2Mat() {

    int **mat = nullptr;
    int row = 4;
    int col = 4;
    mat = my_class.GetRand2Mat(row, col);
    my_class.Print2Arr(mat, row, col);
}   // 运行：：获取二维随机数组（成功）
void RUN_ONE::run_Transposition2Arr() {
    // 打印随机矩阵（原矩阵）
    int **mat = nullptr;
    int row = 4;
    int col = 5;
    mat = my_class.GetRand2Mat(row, col);
    cout << "原始矩阵：" << endl;
    my_class.Print2Arr(mat, row, col);

    // 打印转置后的新矩阵
    int **new_mat = nullptr;
    new_mat = my_class.Transposition2Arr(mat, row, col);
    cout << "转置后的矩阵：" << endl;
    my_class.Print2Arr(new_mat, col, row);
}   // 运行：：二维数组转置（成功）
void RUN_ONE::run_get_type() {
    int a = 1;
    float b = 2;
    string str = "tins is a string";
    int *c;
    int d[3];

    get.print_type(get.get_type(d));
}   // 获取变量类型

#pragma endregion



