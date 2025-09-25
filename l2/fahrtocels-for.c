#include <stdio.h>

#define UPPER_BOUND 300

// Prototype
float fahr_to_cels(float a_fahr);

int main()
{
    printf("from fahrtocels-for...\nFahrenheit | Celsius\n");
    for (int fahr = 0; fahr < UPPER_BOUND; fahr += 20)
    {
        printf("%4d       | %6.1f\n", fahr, fahr_to_cels(fahr));
    }
    printf("--------------------\n");
    return 0;
}

float fahr_to_cels(float a_fahr)
{
    return (5.0 / 9.0) * (a_fahr - 32.0);
}
