#include <stdlib.h>

char *ft_concat_params(int argc, char **argv)
{
    int i, j, k, last_str_size, size;
    char *str;
    
    i = 0;
    j = 0;
    k = 0;
    
    last_str_size = 0;
    
    while(argv[argc-1][last_str_size])
    {
        last_str_size++;   
    }
    size = (argv[argc-1] + last_str_size) - argv;
    
    str = (char*)malloc(sizeof(char) * size);
    
    while (j < argc)
    {
        while(argv[i][j])
        {
            if (argv[i][j]) 
                str[k] = argv[i][j];
            else
                str[k] = '\n';
            i++
        }
        j++
    }
    return (str); 
}