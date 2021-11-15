//
// 调用linux命令；无返回值
//
#include <iostream>
#include<stdlib.h>
void use_popen();
int main()
{
    use_popen();
    system("ls -l");
}
void use_popen()    // 函数：暂时不知道
{
    FILE * fp;
    char buffer[80];
    fp=popen("cat /etc/passwd","r");
    fgets(buffer,sizeof(buffer),fp);
    printf("%s",buffer);
    pclose(fp);
}
