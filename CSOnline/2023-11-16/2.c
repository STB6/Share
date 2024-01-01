#include <stdio.h>
int main(void)
{
    int n = 10, i, sum = 0;
    int a[n];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("sum=%d\n", sum);
    return 0;
}
