#include <stdio.h>

void revprint(char *str)
{
    if (!str)
        return;

    char *end = str;

    // Move end pointer to the end of the string
    while (*end)
        end++;

    // Move end back by one to skip the null-terminator
    end--;

    // Print characters in reverse order
    while (end >= str)
    {
        putchar(*end);
        end--;
    }
    
    putchar('\n'); // Print a newline character at the end
}

int main()
{
    char *text = "Hello, world!";
    revprint(text);
    return 0;
}
/*if (!str) is equivalent to if (str == NULL). 
It checks if the str pointer is pointing to NULL, 
and if it is, the function immediately returns 
without performing any further actions. This is a
safety precaution to ensure that the 
function is used with valid string pointers only./*