#include <stdio.h>
typedef struct
{
    int xh;
    char xm[20];
    int cj[3];
    float average;
} Student;
int main(void)
{
    Student students[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Please input XH of No %d:\n", i + 1);
        scanf("%d", &students[i].xh);
        printf("Please input XM of No %d:\n", i + 1);
        scanf("%s", students[i].xm);
        printf("Please input CJ of No %d:\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &students[i].cj[j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += students[i].cj[j];
        }
        students[i].average = (float)sum / 3;
    }
    FILE *file = fopen("file11_3.txt", "w");
    if (file != NULL)
    {
        for (int i = 0; i < 5; i++)
        {
            fprintf(file, "%d  %s  ", students[i].xh, students[i].xm);
            for (int j = 0; j < 3; j++)
            {
                fprintf(file, "%d  ", students[i].cj[j]);
            }
            fprintf(file, "%.1f\n", students[i].average);
        }
        fclose(file);
    }
    return 0;
}
