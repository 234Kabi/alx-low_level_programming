#include <stdio.h>

void _puts_recursion(char *s) {
    if (*s == '\0') {
        putchar('\n'); // Print a new line when the end of string is reached
        return;
    }
    
    putchar(*s); // Print the current character
    _puts_recursion(s + 1); // Recur with the next character
}

int main() {
    char str[] = "Hello, world!";
    _puts_recursion(str);
    return 0;
}