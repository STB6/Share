#include <stdio.h>

void swapMaxMin(int arr[], int size)
{
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main(void)
{
    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("Before change the max and min's position:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    swapMaxMin(numbers, 10);
    printf("After change the max and min's position:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
