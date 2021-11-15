//
// Created by 侯轶瑄 on 2021/11/14.
//
#include <iostream>
using namespace std;
char * CTrunDlg::TrunTo(char ch[])
int main()
{
    char a[10];
    strcpy(a, "hello");
    cout << a[4] << endl;
    OnButton1();
    return 0;
}
// 暂时失败
char * CTrunDlg::TrunTo(char ch[])// 将小写字母转化为大写
{
    int i=0;
    while (ch!='/0')
    {
        if (ch>='a'&&ch<='z')
        {
            ch=ch-('a'-'A');
        }
        i++;
    }
    return ch;
}
void CTrunDlg::OnButton1()
{
    char temp[]= "abcDEFg呵呵";
    CString str = "";
//     char ch[10];
//     int i = 0;
    char *pch = TrunTo(temp);
//     for (;*pch!='/0';pch++,i++)
    for (;*pch!='/0';pch++)
    {
//            ch = *pch;
        str+=*pch;
    }
    MessageBox(str);
}