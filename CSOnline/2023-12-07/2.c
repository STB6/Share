#include <stdio.h>
#define M 3
#define N 4

void fun(char s[][N], char *b)
{
    int i, j, n = 0;
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < M; i++)
        {
            b[n] = s[i][j];
            n++;
        }
    }
    b[n] = '\0';
}

int main(void)
{
    char a[100], w[M][N] = {{'W', 'W', 'W', 'W'}, {'S', 'S', 'S', 'S'}, {'H', 'H', 'H', 'H'}};
    int i, j;
    printf("The matrix:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%3c", w[i][j]);
        printf("\n");
    }
    fun(w, a);
    printf("The A string:\n");
    puts(a);
    return 0;
}