#include <stdio.h>
int is_true(int x)
{
    int a, b, c;
    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;
    if (x == a * a * a + b * b * b + c * c * c)
        return 1;
    else
        return 0;
}
int main(void)
{
    int i, n;
    scanf("%d", &n);
    for (i = 100; i <= n; i++)
        if (is_true(i))
            printf("%d\n", i);
    printf("\n");
    return 0;
}