#include <stdio.h>

int main()
{
    int guess = 0;

    printf("Guess: ");
    while (scanf("%d", &guess) != EOF)
    {
        if (guess < 42)
        {
            printf("Too low...\n");
        }
        else if (guess > 42)
        {
            printf("Too high...\n");
        }
        else
        {
            printf("Bingo!\n");
            break;
        }
    }

    return 0;
}
