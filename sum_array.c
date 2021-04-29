#include <stdio.h>

int sum_array(int *arr, int size)
{
    if (size > 0)
    {
        return arr[size - 1] + sum_array(arr, size - 1);
    }
    return 0;
}

int sum_array_iter(int *arr, int sum, int i, int size)
{
    if (i == size)
    {
        return sum;
    }
    return sum_array_iter(arr, sum + arr[i], i + 1, size);
}

int main()
{
    int arr[] = {0, 6, 7, 3, 5, 8};
    int size = sizeof arr / sizeof *arr;
    int i = 0;
    int sum_iter = 0;
    int sum = sum_array(arr, size);
    sum_iter = sum_array_iter(arr, sum_iter, i, size);
    printf("Sum = %d\n", sum);
    printf("Sum_iter = %d\n", sum_iter);
    return 0;
}