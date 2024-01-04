#include <stdio.h>

void fun(int x, int pp[], int *n)
{
    *n = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0 && i % 2 != 0)
        {
            pp[*n] = i;
            (*n)++;
        }
    }
}

int main(void)
{
    int x, aa[1000], n, i;
    printf("\nPlease enter an integer number:\n");
    scanf("%d", &x);
    fun(x, aa, &n);
    for (i = 0; i < n; i++)
        printf("%d ", aa[i]);
    printf("\n");
}