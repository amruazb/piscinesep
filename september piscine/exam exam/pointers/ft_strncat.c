#include <unistd.h>
#include <stdio.h>
#include <string.h>


char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *original_dest = dest;  // Keep track of the original dest pointer
    
    // Move dest pointer to the end of the destination string
    while (*dest)
    {
        dest++;
    }
    
    // Copy characters from src to dest using pointers and nb limit
    while (*src && nb > 0)
    {
        *dest = *src;
        dest++;
        src++;
        nb--;
    }
    
    *dest = '\0';  // Null-terminate the concatenated string
    return original_dest;  // Return the original dest pointer
}

int main(void)
{
	char a[100] = "Hi How are you!";
	char b[100] = "I am fine ,thank you";
	char i[100] = "Hi How are you!";
	char j[100] = "I am fine ,thank you!";
	printf("not mine:%s\n",strncat(i,j,20));
	printf("mine:%s\n", ft_strncat(a,b,20));
}