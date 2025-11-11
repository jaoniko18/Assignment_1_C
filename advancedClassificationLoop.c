#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "NumClass.h"

int isArmstrong(int number)
{
    if (number < 0)
        return 0;
    int final_num = number;
    int sum       = 0;
    // now we know size of number
    char str[20];
    snprintf(str, sizeof(str), "%d", number);  // str = "1234"
    int size = strlen(str);
    for (int j = 0; j < size; j++)
    {
        int num = number % 10;           // 1234%10 = 4
        sum     = sum + pow(num, size);  // 4^4
        number  = number / 10;
    }
    if (sum != final_num)
    {
        return 0;
    }

    return 1;
}

int isPalindrome(int number)
{
    if (number < 0)
        return 0;
    char str[20];
    snprintf(str, sizeof(str), "%d", number);  // str = "1234"
    int size = strlen(str);
    int digits[size - 1];
    for (int i = 0; i < size; i++)
    {
        int digit = str[i] - '0';
        digits[i] = digit;
    }
    int i = 0, j = size - 1;
    while (i < j)
    {
        if (digits[i] != digits[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int Factorial(int number)
{
    if (number < 0)
        return 0;
    int i   = 1;
    int sum = 1;
    while (i <= number)
    {
        sum = sum * i;
        i++;
    }

    return sum;
}
