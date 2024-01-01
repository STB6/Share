#include <stdio.h>
#include <string.h>
#define ARR_SIZE 80
void Inverse(char str[]);
int main(void)
{
    char str[ARR_SIZE];
    printf("Please enter a string: ");
    fgets(str, ARR_SIZE, stdin);
    str[strcspn(str, "\n")] = 0;
    Inverse(str);
    printf("The inversed string is :%s", str);
    return 0;
}
void Inverse(char str[])
{
    int len, i = 0, j;
    char temp;
    len = strlen(str);
    for (j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}