#include "NumClass.h"
#include <stdio.h>

int main()
{
    if (isArmstrongRecursive(407) == 1)
        printf("IS ARM REC\n");
    else
        printf("NOT ARM REC\n");
    int key     = 0;
    int number1 = 0;
    int number2 = 0;

    int count_Prime      = 0;
    int count_Strong     = 0;
    int count_Armstrong  = 0;
    int count_Palindrome = 0;

    if (!isPalindromeRecursive(33433))
        printf("not pal\n");
    else
        printf("pal\n");
    printf("First number?\n");
    scanf("%d", &number1);
    printf("Second number?\n");
    scanf("%d", &number2);
    printf("Numbers are: %d %d\n", number1, number2);
    // count primes,armstrongs,strongs and palindoms
    for (int i = number1; i <= number2; i++)
    {
        if (isPrime(i))
            count_Prime++;
        if (isStrong(i))
            count_Strong++;
        if (isPalindrome(i))
            count_Palindrome++;
        if (isArmstrong(i))
            count_Armstrong++;
    }
    // entering array
    int primes[count_Prime];
    int strongs[count_Strong];
    int armstrongs[count_Armstrong];
    int palindroms[count_Palindrome];
    // count for array
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    for (int i = number1; i <= number2; i++)
    {
        if (isPrime(i))
        {
            primes[j] = i;
            j++;
        }
        if (isStrong(i))
        {
            strongs[k] = i;
            k++;
        }
        if (isPalindrome(i))
        {
            palindroms[l] = i;
            l++;
        }
        if (isArmstrong(i))
        {
            armstrongs[m] = i;
            m++;
        }
    }
    int primes_size     = sizeof(primes) / sizeof(primes[0]);
    int strongs_size    = sizeof(strongs) / sizeof(strongs[0]);
    int armstrongs_size = sizeof(armstrongs) / sizeof(armstrongs[0]);
    int palindrome_size = sizeof(palindroms) / sizeof(palindroms[0]);
    printf("Primes: \n");
    for (int i = 0; i < primes_size; i++)
    {
        printf("%d ", primes[i]);
    }
    printf("\n");
    printf("Strongs: \n");
    for (int i = 0; i < strongs_size; i++)
    {
        printf("%d ", strongs[i]);
    }
    printf("\n");
    printf("ArmStrongs: \n");
    for (int i = 0; i < armstrongs_size; i++)
    {
        printf("%d ", armstrongs[i]);
    }
    printf("\n");
    printf("Palindroms: \n");
    for (int i = 0; i < palindrome_size; i++)
    {
        printf("%d ", palindroms[i]);
    }
    return 0;
}