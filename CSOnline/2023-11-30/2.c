#include <stdio.h>

int fun(int m)
{
    int i, k;
    for (i = m + 1;; i++)
    {
        for (k = 2; k * k <= i; k++)
            if (i % k == 0)
                break;
        if (k * k > i)
            return (i);
    }
}

int main(void)
{
    int n;
    printf("Please enter n:");
    scanf("%d", &n);
    printf("%d\n", fun(n));
    return 0;
}