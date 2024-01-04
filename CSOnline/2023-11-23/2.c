#include <stdio.h>

int leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 29;
    }
    else
    {
        return 28;
    }
}

int main(void)
{
    int year;
    printf("请输入年份信息：\n");
    scanf("%d", &year);
    printf("2月份天数是%d天", leap(year));
    return 0;
}