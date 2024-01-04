#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Please input student's number:\n");
    scanf("%d", &n);
    printf("Student CJ number is:\n");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        int studentNo, total = 0;
        printf("Please input XH of No %d:\n", i);
        scanf("%d", &studentNo);
        printf("Please input CJ of No %d:\n", i);
        for (int j = 0; j < m; j++)
        {
            int grade;
            scanf("%d", &grade);
            total += grade;
        }
        double average = (double)total / m;
        printf("Student No %d's Total CJ is %d,Avg CJ is %.1f\n", studentNo, total, average);
    }
    return 0;
}
