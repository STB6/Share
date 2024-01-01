#include <stdio.h>
int fun(int n)
{
    int p = 1;
    for (int i = 1; i <= n; i++)
        p = p * i;
    return p;
}
int main(void)
{
    int n;
    printf("input member:");
    scanf("%d", &n);
    printf("%d!=%d\n", n, fun(n));
    return 0;
}