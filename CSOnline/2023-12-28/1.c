#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp3;
    int b[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i = 0, n;
    if ((fp3 = fopen("file11_23.txt", "w")) == NULL)
    {
        printf("%s不能打开\n", "file11_23.txt");
        exit(1);
    }
    while (i < 10)
    {
        fprintf(fp3, "%d", b[i]);
        if (i % 3 == 0)
            fprintf(fp3, "\n");
        else
            fprintf(fp3, " ");
        i++;
    }
    fclose(fp3);
    if ((fp3 = fopen("file11_23.txt", "r")) == NULL)
    {
        printf("%s不能打开\n", "file11_23.txt");
        exit(1);
    }
    fscanf(fp3, "%5d", &n);
    while (!feof(fp3))
    {
        printf("%5d", n);
        fscanf(fp3, "%d", &n);
    }
    printf("\n");
    fclose(fp3);
    return 0;
}