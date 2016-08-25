#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *tab;
    
    i=0;
    tab = (int*)malloc(sizeof(int) * (max-int));
    while (min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }
    *range = tab;
    return (i);
}