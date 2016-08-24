#include <stdlib.h>

char        *ft_strdup(char *src)
{
    int size, i;
    char *p;
    size = 0;
    i = 0;
    p = NULL;
    
    while(*(src + size)!= '\0')
    {
        size++;
    }
    p = malloc(sizeof(char) * size);
    
    while(i < size)
    {
        *(p+i) = *(src+i);
        i++;
    }
    *(p+i) = '\0';
    
    return p;
}