#include <stdio.h>
int main(void)
{
    char a[20] = "wel", b[] = "come";
    int i, n = 0;
    while (a[n] != '\0')
        n++;
    for (i = 0; b[i] != '\0'; i++)
        a[n + i] = b[i];
    a[n + i] = '\0';
    printf("%s\n", a);
    return 0;
}
