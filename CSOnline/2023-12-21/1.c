#include <stdio.h>
#include <string.h>

struct stud
{
    char name[20];
    int age;
};

struct stud fun(struct stud person[], int n)
{
    int min = 0;
    int i;
    for (i = 1; i < n; i++)
    {
        if (person[i].age < person[min].age)
        {
            min = i;
        }
    }
    return person[min];
}

int main(void)
{
    struct stud a[] = {{"Zhao", 21}, {"Qian", 20}, {"Sun", 19}, {"Li", 22}};
    int n = 4;
    struct stud minpers;
    minpers = fun(a, n);
    printf("%s是年龄小者，年龄是：%d\n", minpers.name, minpers.age);
    return 0;
}