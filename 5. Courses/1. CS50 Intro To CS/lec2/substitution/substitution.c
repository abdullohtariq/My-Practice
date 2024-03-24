#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
// Your program must accept a single command-line argument, the key to use for the substitution.
int main(int argc, string argv[])
{
    // The key itself should be case-insensitive, so whether any character in the key is uppercase
    // or lowercase should not affect the behavior of your program. If your program is executed
    // without any command-line arguments or with more than one command-line argument, your program
    // should print an error message of your choice (with printf) and return from main a value of 1
    // (which tends to signify an error) immediately.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // If the key is invalid, your program should print an error message of your choice (with
    // printf) and return from main a value of 1 immediately. containing any character that is not
    // an alphabetic character
    int i = 0;
    while (argv[1][i] != '\0')
    {
        if (isdigit(argv[1][i]))
        {
            printf("Invalid Number in Key\n");
            return 1;
        }
        i++;
    }
    // as by not containing 26 characters,
    if (i != 26)
    {
        printf("Not 26 Letters present In Key\n");
        return 1;
    }
    // or not containing each letter exactly once
    bool alphabets[26] = {};
    i = 0;
    int j = 0;
    while (argv[1][i] != '\0')
    {
        j = tolower(argv[1][i]) - 97;
        alphabets[j] = !alphabets[j];
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (!alphabets[i])
        {
            printf("All the Letter aren't present in Key\n");
            return 1;
        }
    }
    // Your program must output plaintext: (without a newline) and then prompt the user for a string
    // of plaintext (using get_string).
    string plainText = get_string("plaintext:  ");
    // Your program must output ciphertext: (without a newline) followed by the plaintext’s
    // corresponding ciphertext, with each alphabetical character in the plaintext substituted for
    // the corresponding character in the ciphertext; non-alphabetical characters should be
    // outputted unchanged.
    printf("ciphertext: ");
    char aplha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    i = 0;
    int k;
    while (plainText[i] != '\0')
    {
        // Your program must preserve case: capitalized letters must remain capitalized letters;
        // lowercase letters must remain lowercase letters.
        for (k = 0; k < 26; k++)
        {
            if (plainText[i] == aplha[k])
            {
                printf("%c", toupper(argv[1][k]));
            }
            else if (plainText[i] == tolower(aplha[k]))
            {
                printf("%c", tolower(argv[1][k]));
            }
        }
        if (!isalpha(plainText[i]))
        {
            printf("%c", plainText[i]);
        }
        i++;
    }
    // After outputting ciphertext, you should print a newline. Your program should then exit by
    // returning 0 from main.
    printf("\n");
    return 0;
}
