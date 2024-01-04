#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        j = i * 10 + 6;
        if (j % 3 != 0)
            continue;
        printf("%d ", j);
    }
    return 0;
}