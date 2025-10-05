/* Exercise 1-21. Write a program to "fold" long input lines after the last
 * non-blank character that occurs before the n-th column of input, where n is a
 * parameter. Make sure your program does something intelligent with very long
 * lines, and if there are no blanks or tabs before the specified column. */

#include <stdio.h>

int main()
{
    char line_buff[81];
    int c, i = 0;

    while ((c = getchar()) != EOF)
    {
        if (i < (81 - 1))
        {
            line_buff[i] = c;
            ++i;
        }
        else
        {   // Process line
            line_buff[i]
            
        }
    }

    return 0;
}
