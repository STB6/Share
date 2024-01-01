#include <stdio.h>
int main(void)
{
    double e = 1.0;
    double term = 1.0;
    for (int i = 1; i <= 1000; i++)
    {
        term /= i;
        e += term;
    }
    printf("%.5lf\n", e);
    return 0;
}
