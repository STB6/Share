#include <stdio.h>
int main(void)
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 10 == 8 || i / 10 == 8)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}