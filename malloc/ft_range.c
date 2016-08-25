#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int *tab; 
    int size, i;
    i=0;
    
    if(min < max)
    {
        size = max - min;
        tab = (int*)malloc(sizeof(int) * size);
        while(i < size)
        {
            tab[i] = min + i;
            i++;
        }
    }
    else
        *tab = NULL;
        
    return tab;
}