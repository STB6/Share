#include <stdio.h>
#include <string.h>
#define LENGTH 50

char *compare(char *str1, char *str2)
{
    int len1, len2, i, j, k, max = 0;
    static char p[LENGTH];
    len1 = strlen(str1);
    len2 = strlen(str2);
    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                for (k = 0; k < len1 - i && k < len2 - j; k++)
                {
                    if (str1[i + k] != str2[j + k])
                        break;
                }
                if (k > max)
                {
                    max = k;
                    strncpy(p, str1 + i, max);
                    p[max] = '\0';
                }
            }
        }
    }
    if (max == 0)
    {
        return "No Answer";
    }
    return p;
}

int main(void)
{
    char str1[LENGTH], str2[LENGTH];
    scanf("%s%s", str1, str2);
    printf("%s\n", compare(str1, str2));
    return 0;
}