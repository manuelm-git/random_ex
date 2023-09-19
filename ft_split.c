#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2, int len)
{
    int i = 0;

    while (i < len)
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}

char    **ft_split(char *str)
{
    int i = 0;
    int wc = 0;
    int start = 0;
    int k = 0;

    while(str[i])
    {
        while(str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if(str[i])
            wc++;
        while(str[i] != '\0' && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }
    char **out= (char**)malloc(sizeof(char *) * (wc + 1));
    i = 0;
    while(str[i])
    {
        while(str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        start = i;
        while(str[i] != '\0' && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (start < i)
        {
            out[k] = (char *)malloc(sizeof(char) * ((i - start) + 1));
            ft_strcpy(out[k++], &str[start], i - start);
        }
    }
    out[k] = NULL;
    return (out);
}
