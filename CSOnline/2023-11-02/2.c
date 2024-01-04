#include <stdio.h>

int main(void)
{
    int left, right;
    char c;
    left = 0;
    right = 0;
    for (c = 0; (c = getchar()) != 10;)
    {
        if (
            c == '(')
            left++;
        if (
            c == ')')
            right++;
        if (
            right > left)
            break;
    }
    if (
        left == right)
        printf("y\n");
    else
        printf("n\n");
    return 0;
}