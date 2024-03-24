#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
void uppercaseString(string words);
int totalPoints(string words);

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
char aplha[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(void)
{

    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");
    uppercaseString(p1);
    uppercaseString(p2);
    int playerOne = totalPoints(p1);
    int playerTwo = totalPoints(p2);
    if (playerOne > playerTwo)
    {
        printf("Player 1 Wins!!\n");
    }
    else if (playerOne < playerTwo)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!");
    }
}
void uppercaseString(string words)
{
    int i = 0;
    while (words[i] != '\0')
    {
        words[i] = toupper(words[i]);
        i++;
    }
}

int totalPoints(string words)
{
    int totalPoint = 0;
    int i = 0;
    while (words[i] != '\0')
    {

        for (int j = 0; j < 26; j++)
        {
            if (words[i] == aplha[j])
            {
                totalPoint += points[j];
            }
        }
        i++;
    }
    return totalPoint;
}
