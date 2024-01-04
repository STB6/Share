#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp1;
    char ch[80];
    int i, j;
    fp1 = fopen("data1.dat", "wb");
    for (i = 1; i <= 4; i++)
    {
        gets(ch);
        j = 0;
        while (ch[j] != '\0')
        {
            fputc(ch[j], fp1);
            j++;
        }
        fputc('\n', fp1);
    }
    fclose(fp1);
}