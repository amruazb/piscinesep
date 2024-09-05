#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
    int len = 0;
    char *ps1 = s1;
    while(*s1)
    {
        s1++;
        len++;
    }
    int i = 0;
    while(*s2 && i < len)
    {
        if (*s2 == ps1[i])
        {
            i++;
        }
        s2++;
    }
    if (i == len)
    {
        write(1, ps1, len);
    }
}

void wdmatch(char *s1, char *s2)
{
    int len = 0;
    char *ps1 = s1;
    while(*s1)
    {
        s1++;
        len++;
    }
    int i = 0;

    while(*s2 && i < len)
    {
        if (*s2  == ps1[i])
        {
            i++;
        }
        s2++;
    }
    if (i == len)
    {
        write(1, ps1, len);
    }
}

void wdmatch(char *s1, char *s2)
{
    int len = 0;
    char *ps1 = s1;

    while(*s1)
    {
        s1++;
        len++;
    }
    
    int i = 0;

    while (*s2 && i < len)
    {
        if (*s1 == ps1[i])
        {
            i++;
        }
        s2++;
    }
    if(i == len)
    {
        write(1, ps1, len);
    }
}



void wdmatch(char *s1, char *s2)
{
    int len = 0;

    char *ps1 = s1;

    while(*s1)
    {
        s1++;
        len++;
    }
    int i = 0;

    while(*s2 && i < len)
    {
        if(*s2 == ps1[i])
        {
            i++;
        }
        s2++;
    }
    if(i == len)
    {
        write(1, ps1, len);
    }
}


void wdmatch(char *s1, char *s2)
{
    int len = 0;
    char *ps1 = s1;
    while(*s1)
    {
        len++;
        s1++;
    }
    int i = 0;
    while (*s2 && i < len)
    {
        if(*s2 == ps1[i])
        {
            i++;
        }
        s2++;
    }
    if (i == len)
    {
        write(1, ps1, len);
    }
}

void wdmatch(char *s1, char *s2)
{
    int len = 0;
    char *ps1 = s1;

    while(*s1)
    {
        len++;
        s1++;
    }
    int i = 0;
    while(*s2 && i < len)
    {
        if(*s2 == ps1[i])
        {
            i++;
        }
        s2++;
    }
    if (i == len)
    {
        write(1, ps1, len);
    }
}


void wdmatch(char *s1,char *s2)
{
    int len = 0;
    char *ps1 = s1;

    while(*s1)
    {
        len++;
        s1++;
    }
    int i = 0;

    while(*s2 && i < len)
    {
        if (*s2 == ps1[i])
        {
            i++;
        }
        s2++;
    }
    if (i == len)
    {
        write(1, ps1, len);
    }
}