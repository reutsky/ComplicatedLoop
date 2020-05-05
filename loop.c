// This program is meant to loop a complicated function. 
// I want the program to get integer input, decide whether the number is odd or even.
// Then prompt a user to asnwer the parity question.
// In case if the user can't get it right 2 times,
// I want the program to say 'User-loser.'

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = 0;

    // In case of a disagreement - push
    while (i < 2)
    {

        // Prompt user for an answer
        char answer = get_char("Do you agree?\n");

        // Do we agree?
        if (answer == 'y' || answer == 'Y')
        {
            printf("Agreed.\n");

            // Shake hands and quit
            i = i + 2;
        }
        else if (answer == 'n' || answer == 'N')
        {

            if (i == 0)
            {
                printf("Not agreed. I give you one more chance.\n");

                // Push
                i++;
            }
            else if (i == 1)
            {
                printf("Not agreed.\n");

                // Stop negotiating
                i++;
            }
            
        }
        else
        {
            printf("Fuck off/n");
            i = i + 2;
        }

    }
}
