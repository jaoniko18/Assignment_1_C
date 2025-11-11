#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "NumClass.h"

int isStrong(int number)
{
    if (number < 0)
        return 0;
    char str[100];
    snprintf(str, sizeof(str), "%d", number);
    int size = strlen(str);
    int digits[size - 1];
    for (int i = 0; i < size; i++)
    {
        digits[i] = str[i] - '0';
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + Factorial(digits[i]);
    }
    if (sum != number)
        return 0;
    return 1;
}

int isPrime(int number)
{
    if (number < 0)
        return 0;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}