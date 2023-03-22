#include <stdio.h>

/**
 * print_name_as_is - a function that prints a name.
 * @name: the name Kabi
 * @f: function of name
 * Return: void
 */

void print_name(char *name, void (*f)(char *)) {
    f(name);
}

void print_to_stdout(char *name) {
    printf("Name: %s\n", name);
}

int main() {
    char *name = "Kabi";
    print_name(name, &print_to_stdout);
    return 0;
}

