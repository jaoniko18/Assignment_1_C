/*#include <stdio.h>
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

int isArmstrongRecursive(int number)
{
    if (number < 0)
        return 0;
    if (!ArmHelper(number, number, 0))
        return 0;
    else
        return 1;
}

int ArmHelper(int number, int temp, int sum)
{
    int  cutNumber = temp;
    char str[20];
    snprintf(str, sizeof(str), "%d", temp);
    int  size = strlen(str);  // we now have size of our number
    char str1[20];
    snprintf(str1, sizeof(str1), "%d", number);
    int main_size = strlen(str1);  // we now have size of our number
    int num       = temp % 10;
    sum           = sum + pow(num, main_size);
    cutNumber     = cutNumber / 10;
    if (size == 1 && sum == number)
    {
        return 1;
    }
    if (size == 1 && sum != number)
        return 0;
    return ArmHelper(number, cutNumber, sum);
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

int isPalindromeRecursive(int number)
{
    if (number < 0)
        return 0;
    char num[20];
    snprintf(num, sizeof(num), "%d", number);
    // char to int
    if (!isPalHepler(num))
        return 0;
    return 1;
}

int isPalHepler(char* number)
{
    int size = strlen(number);
    if (size <= 0)
        return 1;
    char* dest = malloc(size);
    if (number[0] != number[size - 1])
        return 0;
    slice(number, dest, 1, size - 1);
    int result = isPalHepler(dest);
    free(dest);
    return result;
}

// slicing
void slice(const char* src, char* dest, int start, int end)
{
    int j = 0;
    for (int i = start; i < end && src[i] != '\0'; i++)
    {
        dest[j++] = src[i];
    }
    dest[j] = '\0';  // null terminate
}


*/