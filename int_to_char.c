#include <stdio.h>
#include <limits.h>

void int_to_char(int sign, long number, int p, char *str)
{
    int numeral;
    if (number < 10)
    {
        if (sign == 1)
        {
            *(str + p - 1) = '-';
        }
        *(str + p) = number + '0';
        return;
    }
    numeral = number % 10;
    *(str + p) = numeral + '0';
    int_to_char(sign, number / 10, p - 1, str);
}

int main()
{
    char str[12];
    int i, sign = 0;
    long number;
    for (i = 0; i < 12; i++)
    {
        str[i] = ' ';
    }
    printf("Введите число: \n");
    scanf("%ld", &number);
    if ((number > INT_MAX) || (number < INT_MIN))
    {
        printf("Ошибка: введите число в диапазоне значений 'int'\n");
        return -1;
    }
    if (number < 0)
    {
        sign = 1;
        number *= -1;
    }
    int_to_char(sign, number, 10, str);
    printf("%s\n", str);
    return 0;
}