#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int arraySize(string s[]);
char aplha[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
// argc are number of arguments we are getting:
int main(int argc, string argv[])
{
    // we need only 2 arguments in this case:
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Checking if the the argument is a number:
    int i = 0;
    while (argv[1][i] != '\0')
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        i++;
    }
    // putting the number equal to the k + you need stdlib.h to use atoi
    int k = atoi(argv[1]);
    // prompting user  for the input + Printing ciphertext:
    string plainText = get_string("plaintext:  ");
    printf("ciphertext: ");
    i = 0;
    while (plainText[i] != '\0')
    {
        // if the character is upper start with
        if (isupper(plainText[i]))
        {
            printf("%c", (plainText[i] - 65 + k) % 26 + 65);
        }
        else if (islower((plainText[i])))
        {
            printf("%c", (plainText[i] - 97 + k) % 26 + 97);
        }
        else
        {
            printf("%c", plainText[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
