#include "main.h"

void print_array(int *a, int n)
{
    char buffer[20];
    int i, len;
    int start;
    int end;
    int j;

    for (i = 0; i < n; i++)
    {
        int num = a[i];
        int is_negative = 0;
        if (num < 0)
        {
            is_negative = 1;
            num = -num;
        }

        len = 0;
        do
        {
            buffer[len++] = '0' + (num % 10);
            num /= 10;
        } while (num > 0);

        if (is_negative)
        {
            buffer[len++] = '-';
        }

        start = 0;
        end = len - 1;
        while (start < end)
        {
            char temp = buffer[start];
            buffer[start] = buffer[end];
            buffer[end] = temp;
            start++;
            end--;
        }

        for (j = 0; j < len; j++)
        {
            _putchar(buffer[j]);
        }

        if (i < n - 1)
        {
            _putchar(',');
            _putchar(' ');
        }
    }

    _putchar('\n');
}
