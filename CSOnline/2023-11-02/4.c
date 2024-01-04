#include <stdio.h>

int main(void)
{
    for (int i = 999; i > 0; i--)
    {
        if ((i % 5 == 2) && (i % 7 == 3) && (i % 3 == 1))
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}