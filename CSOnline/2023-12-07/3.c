#include <stdio.h>
int is_prime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void fun(int m, int *k, int xx[])
{
    *k = 0;
    for (int i = 2; i < m; i++)
    {
        if (!is_prime(i))
        {
            xx[*k] = i;
            (*k)++;
        }
    }
}
int main(void)
{
    int m, n, zz[100];
    printf("Please enter an integer number between 10 and 100: \n");
    scanf("%d", &n);
    fun(n, &m, zz);
    printf("There are %d non-prime numbers less than %d:\n", m, n);
    for (n = 0; n < m; n++)
        printf("%4d", zz[n]);
    return 0;
}