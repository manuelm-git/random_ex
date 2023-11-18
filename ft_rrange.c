#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int start2 = start;
    int end2 = end;
    int size;
    int *array;
    int i = 0;

    if(start2 < 0)
        start2 = -start2;
    if(end2 < 0)
        end2 = -end2;
    size = end2 - start2;
    array = malloc((size + 1) * sizeof(int *));
    if (start < end)
    {
        while(start <= end)
        {
            array[i++] = end--;
        }
    }
    else if (end < start)
    {
        while(end <= start)
        {
            array[i++] = end++;
        }
    }
    return(array);
}


