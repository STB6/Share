#include <stdio.h>
#define M 100

void fun(int m, int *a, int *n)
{
    int i;
    *n = 0;
    for (i = 1; i <= m; i++)
    {
        if (i % 7 == 0 || i % 11 == 0)
        {
            a[*n] = i;
            (*n)++;
        }
    }
}

int main(void)
{
    int aa[M], n, k;
    fun(50, aa, &n);
    for (k = 0; k < n; k++)

        if ((k + 1) % 20 == 0)
            printf("\n");

        else
            printf("%4d", aa[k]);
    printf("\n");
    return 0;
}