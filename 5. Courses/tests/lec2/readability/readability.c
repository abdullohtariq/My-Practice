#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int lettersNumbers(string sentence);
int wordsNumbers(string sentence);
int sentencesNumbers(string sentence);
int main()
{
    string sentence = get_string("Text: ");
    int l = lettersNumbers(sentence);
    int s = sentencesNumbers(sentence);
    int w = wordsNumbers(sentence);
    // Average no. of letters:
    float aS = (float) s / w * 100;
    float aL = (float) l / w * 100;
    // Formula to calculate the level of english:
    float index = 0.0588 * aL - 0.296 * aS - 15.8;
    int index1 = round(index);

    if (index1 < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index1 >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index1);
    }
}
// A Function That Takes The string and give back the number of words:
int lettersNumbers(string sentence)
{
    int i = 0;
    int j = 0;
    while (sentence[i] != '\0')
    {
        if (isalpha(sentence[i]))
        {
            j++;
        }
        i++;
    }
    return j;
}
// A Function That Takes The string and give back the number of words:
int wordsNumbers(string sentence)
{
    int i = 0;
    int j = 0;
    while (sentence[i] != '\0')
    {
        if (sentence[i] == ' ')
        {
            j++;
        }
        i++;
    }
    // because there are is one less space than words:
    j++;
    return j;
}
// A Function That Takes The string and give back the number of Sentences:
int sentencesNumbers(string sentence)
{
    int i = 0;
    int j = 0;
    while (sentence[i] != '\0')
    {
        if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?')
        {
            j++;
        }
        i++;
    }
    return j;
}
