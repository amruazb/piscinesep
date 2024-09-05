#include <stdlib.h>

#define S while(*s)
#define W while(*s && !is_separator(*s, charset))
#define M(x) malloc(x)
#define R(i) result[i]

char **ft_split(char *s, char *c) {
    int wc=count_words(s, c),i=0;
    char **result=M((wc+1)*sizeof(char*));
    if (!result) return NULL;
    S{if(!is_separator(*s,c))
    {int wl=0;
    W wl++;R(i)=M((wl+1)*sizeof(char));
    if(!R(i))return NULL;int j=0;
    W R(i)[j++]=*s++;R(i)[j]='\0';i++;}
    else s++;}R(i)=NULL;
    return result;
}
char *str = "This is a string with multiple words.";
char *separators = " ,.";
char **words;

words = ft_split(str, separators);

// words now points to an array of strings:
// ["This", "is", "a", "string", "with", "multiple", "words."]
