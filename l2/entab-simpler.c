/* Write the program entab which replaces strings of blanks by the minimum number
 * of tabs and blanks to achieve the same spacing. Use the same tab stops as for
 * detab.*/

#include <stdio.h>

#define TAB_WIDTH 8

int main()
{
    int c;
    int column = 0;
    int space_count = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            // If the character is a space, don't print it yet.
            // Just count it, but first check if we've landed on a tab stop.
            // If we have, we can output a tab instead of counting spaces.
            if ((column + 1) % TAB_WIDTH == 0)
            {
                putchar('\t');
                column++; // Go to the next column
                space_count = 0; // The tab replaced all buffered spaces
            }
            else
            {
                space_count++;
                column++;
            }
        }
        else
        {
            // If the character is NOT a space, first print any buffered spaces.
            while (space_count > 0)
            {
                putchar(' ');
                space_count--;
            }

            // Now, print the actual character.
            putchar(c);
            
            if (c == '\n')
            {
                column = 0; // Reset for newlines
            }
            else
            {
                column++;
            }
        }
    }
    return 0;
}
