#include <stdio.h>
void move(int *arr, int n, int m)
{
    int temp[m];
    for (int i = 0; i < m; i++)
    {
        temp[i] = arr[n - m + i];
    }
    for (int i = n - m - 1; i >= 0; i--)
    {
        arr[i + m] = arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        arr[i] = temp[i];
    }
}
int main(void)
{
    int n, m;
    printf("how many numbers?");
    scanf("%d", &n);
    int arr[n];
    printf("input %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("how many place you want move?");
    scanf("%d", &m);
    move(arr, n, m);
    printf("Now,they are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}