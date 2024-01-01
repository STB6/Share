#include <stdio.h>
#include <string.h>
void encrypt(char *str)
{
    for (; *str != '\0'; str++)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = (*str - 'a' + 3) % 26 + 'a';
        }
    }
}
void decrypt(char *str)
{
    for (; *str != '\0'; str++)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = (*str - 'a' - 3 + 26) % 26 + 'a';
        }
    }
}
int main(void)
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    encrypt(str);
    printf("%s\n", str);
    decrypt(str);
    printf("%s\n", str);
    return 0;
}