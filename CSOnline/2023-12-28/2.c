#include <stdio.h>

int main(void)
{
    FILE *file;
    int num, sumPositive = 0, sumNegative = 0;
    file = fopen("file11_1.txt", "r");
    while (fscanf(file, "%d", &num) != EOF)
    {
        if (num > 0)
        {
            sumPositive += num;
        }
        else if (num < 0)
        {
            sumNegative += num;
        }
    }
    fclose(file);
    printf("sum>0 number is %d,sum<0 number is %d\n", sumPositive, sumNegative);
    return 0;
}
