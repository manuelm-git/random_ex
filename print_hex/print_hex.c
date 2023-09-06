#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(char *str)
{
    int n = 0;

    while (*str != '\0')
    {
        n *= 10;
        n = n + *str - '0';
        str++;
    }
    return (n);
}
void puthexa(unsigned int n)
{
   // printf("%d\n", n);
    if (n >= 16)
    {
        puthexa(n / 16);
    }
    write(1,(&"0123456789abcdef"[n % 16]),1);
}
int main(int argc,char **argv)
{
    if (!argv[1])
        return (0);
    if (argc == 2)
    {
        int n = ft_atoi(argv[1]);
        puthexa(n);
    }
    write(1,"\n",1);
}