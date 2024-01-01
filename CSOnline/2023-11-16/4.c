#include <stdio.h>
#define N 4
#define M 4
int main(void)
{
    int i, j, k, flag1, a[N][M], max, maxj;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < N; i++)
    {
        max = a[i][0];
        maxj = 0;

        for (j = 0; j < M; j++)
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxj = j;
            }
        for (k = 0, flag1 = 1; k < N; k++)
            if (max > a[k][maxj])
            {
                flag1 = 0;
                break;
            }

        if (flag1)
        {
            printf("\nThe saddle point is :a[%d][%d]=%d\n", i, maxj, max);
            break;
        }
    }
    if (!flag1)
        printf("\nThere is no saddle point in the Matrix\n");

    return 0;
}
