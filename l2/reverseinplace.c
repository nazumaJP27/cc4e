#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    char str[]  = "xhelloo";
    char cx; // Indexes of elements on str

    int tail, str_len = strlen(str);
    
    printf("str: %s\n", str);
    for (int i = 0; i < str_len; ++i)
    {
        tail = (str_len - 1) - i;
        if (tail > i)
        {
            cx = str[i];
            str[i] = str[tail];
            str[tail] = cx;
        }
    }
    printf("str: %s\n", str);
}
