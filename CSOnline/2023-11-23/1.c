#include <stdio.h>
#define LENGTH 1000
void MyInstr(char *string)
{
    for (int index = 0; index < LENGTH; index++)
    {
        if (string[index] == '*')
        {
            printf("该字符串的第%d位置有非法字符*\n", index + 1);
            return;
        }
    }
    printf("该字符串不含有非法字符*\n");
}
int main(void)
{
    char string[100];
    printf("请输入待检测的字符串信息：\n");
    scanf("%s", string);
    MyInstr(string);
    return 0;
}