#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char string[100];
    int count = 0;
    printf("请输入待检测的字符串信息：\n");
    fgets(string, sizeof(string), stdin);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (isalpha(string[i]))
        {
            count++;
        }
    }
    printf("待检测的字符串中含有%d个字母字符\n", count);
    return 0;
}