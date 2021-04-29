#include <stdio.h>

int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int fib_iter(int first, int second, int i, int n)
{
    if (n < 2)
    {
        return n;
    }
    if (i == n)
    {
        return first;
    }
    int third = first + second;
    return fib_iter(second, third, i + 1, n);
}

int main()
{
    int element;
    int element_iter;
    int num_of_element;
    printf("Введите номер числа Фибоначчи\n");
    scanf("%d", &num_of_element);
    int i = 0;
    int first = 0;
    int second = 1;
    if (num_of_element < 0)
    {
        printf("Ошибка: номер числа не может быть числом отрицательным\n");
        return -1;
    }
    element = fib(num_of_element);
    element_iter = fib_iter(first, second, i, num_of_element);
    printf("element = %d\n", element);
    printf("element_iter = %d\n", element_iter);
    return 0;
}