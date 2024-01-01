#include <stdio.h>
#include <string.h>
int isHuiwen(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main(void)
{
    char strings[5][100];
    int count = 0;
    printf("Please input 5 strings:\n");
    for (int i = 0; i < 5; i++)
    {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }
    printf("Huiwens are :\n");
    for (int i = 0; i < 5; i++)
    {
        if (isHuiwen(strings[i]))
        {
            printf("%s\n", strings[i]);
            count++;
        }
    }
    printf("num of Huiwens is :%d\n", count);
    return 0;
}
