#include <stdio.h>

int main(void)
{
    char str[] = "_putchar\n";
    for (int i = 0; str[i] != '\0'; i++)
        putchar(str[i]);
    return 0;
}

