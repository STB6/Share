#include <stdio.h>

struct stu
{
    int no;
    char name[20];
    int math;
    int english;
    int c;
    int sum;
} lst[5];

int main(void)
{
    int low = 0, high = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d%s%d%d%d", &lst[i].no, lst[i].name, &lst[i].math, &lst[i].english, &lst[i].c);
        lst[i].sum = lst[i].math + lst[i].english + lst[i].c;
    }
    for (int i = 1; i < 5; i++)
    {
        if (lst[i].sum > lst[high].sum)
        {
            high = i;
        }
        if (lst[i].sum < lst[low].sum)
        {
            low = i;
        }
    }
    printf("The max total score's student is %d  %s  %d\n", lst[high].no, lst[high].name, lst[high].sum);
    printf("The min total score's student is %d  %s  %d\n", lst[low].no, lst[low].name, lst[low].sum);
    return 0;
}
