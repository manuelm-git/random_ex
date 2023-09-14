#include <unistd.h>
#include <stdio.h>

int ft_len(char *s)
{
    int i;

    i = -1;
    while (s[++i])
        ;
    return (i);
}

void    ft_rev(char *str)
{
    int start;
    int end;
    int len;
    int  i = 0;

    end = ft_len(str) - 1;
    start = end;
    while (start >= 0)
    {
        while (str[start] != ' ')
            start--;
        if (start <= 0)
            start = -1;
        len = start;
        while (++start <= end)
        {
            write(1,&str[start],1);
        }
        start = len - 1;
        if (start > 0)
            write (1, " ", 1);
        end = start;
        i++;
    }
}

int main(int argc,char **argv)
{
    if(argc >= 2)
    {
//        int flag = 1;
        if (argc == 2)
        {
            ft_rev(argv[1]);
        }
            write(1,"\n",1);
    }
}

