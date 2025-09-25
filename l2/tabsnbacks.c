#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
            case '\t':
                printf(">\b-");
                break;
            case '\b':
                printf("<\b-");
                break;
            default:
                putchar(c);
        }
    }
    return 0;
}


