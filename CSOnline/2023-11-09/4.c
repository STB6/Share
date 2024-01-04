#include <stdio.h>

int main(void)
{
    int i, j, k;
    char ch;
    scanf("%c", &ch);
    k = ch - 'A' + 1;
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= k - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("%c", 'A' + i - 1);
        printf("\n");
    }
    for (i = k - 1; i >= 1; i--)
    {
        for (j = 1; j <= k - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("%c", 'A' + i - 1);
        printf("\n");
    }
    return 0;
}
