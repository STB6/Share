#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int main(void)
{
    struct date d;
    int days = 0;
    int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d%d", &d.year, &d.month, &d.day);
    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
    {
        month_day[1] = 29;
    }
    for (int i = 0; i < d.month - 1; i++)
    {
        days += month_day[i];
    }
    days += d.day;
    printf("%d\n", days);
    return 0;
}