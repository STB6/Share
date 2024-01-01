#include <stdio.h>
int main(void)
{
    char ch;
    ch = 'z' + 1;
    do
    {
        ch--;
        printf("%c  ", ch);
    } while (ch != 'a');
    return 0;
}
