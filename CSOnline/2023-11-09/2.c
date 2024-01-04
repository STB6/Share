#include <stdio.h>

int main(void)
{
    int r, m, n, t, gcd, lcm;
    scanf("%d%d", &m, &n);
    if (m < n)
    {
        t = m;
        m = n;
        n = t;
    }
    gcd = n;
    lcm = m * n;
    r = m % n;
    while (r)
    {
        m = n;
        n = r;
        r = m % n;
    }
    gcd = n;
    lcm /= gcd;
    printf("%d %d\n", gcd, lcm);
    return 0;
}