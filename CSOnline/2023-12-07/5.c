#include <stdio.h>
char *fun(char *a, char *b)
{
    int i = 0, j = 0;
    while (a[i] != '\0' && a[i] != '\n')
    {
        i++;
    }
    while (b[j] != '\0' && b[j] != '\n')
    {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
    return a;
}
int main(void)
{
    char a[100], b[100];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    printf("%s\n", fun(a, b));
    return 0;
}