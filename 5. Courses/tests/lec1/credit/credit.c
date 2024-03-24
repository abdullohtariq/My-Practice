#include <cs50.h>
#include <stdio.h>
bool checkSum();
int countDigits();
int main(void)
{
    long num = get_long("Credit Card Number: ");
    // if the function is returning a true value it means the card is valid
    // we will just check it which one of card is it here
    if (checkSum(num))
    {
        int x = countDigits(num);
        if (x == 13)
        {
            if (num / 1000000000000 == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (x == 15)
        {
            if (num / 10000000000000 == 34 || num / 10000000000000 == 37)
                printf("AMEX\n");
            else
            {
                printf("INVALID\n");
            }
        }
        else if (x == 16)
        {
            if (num / 100000000000000 == 51 || num / 100000000000000 == 52 ||
                num / 100000000000000 == 53 || num / 100000000000000 == 54 ||
                num / 100000000000000 == 55)
            {
                printf("MASTERCARD\n");
            }
            else if (num / 1000000000000000 == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
int countDigits(long number)
{
    int count = 0;
    while (number > 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}

// First step is to determine wether the card is valid or not??:
bool checkSum(long number)
{
    int digit, sum = 0;
    bool doubleChecker = false;

    while (number > 0)
    {
        digit = number % 10;
        number = number / 10;
        if (doubleChecker)
        {
            digit = digit * 2;
            if (digit < 10)
            {
                sum = sum + digit;
            }
            else
            {
                int singleDigit = 0;
                while (digit > 0)
                {
                    singleDigit = digit % 10;
                    digit = digit / 10;
                    sum = sum + singleDigit;
                }
            }
        }
        else
        {
            sum = sum + digit;
        }
        doubleChecker = !doubleChecker;
    }

    return sum % 10 == 0;
}
