#include <stdio.h>
#include <ctype.h>
#include <string.h>
void fun(char *str, char *result)
{
    int check_0 = 0;
    while (*str != '\0')
    {
        if (isdigit(*str))
        {
            if (!check_0)
            {
                if (*str != '0')
                {
                    check_0 = 1;
                    *result = *str;
                    result++;
                }
            }
            else
            {
                *result = *str;
                result++;
            }
        }
        str++;
    }
    *result = '\0';
}

int main(void)
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    char result[100];
    fun(str, result);
    printf("%s\n", result);
    return 0;
}