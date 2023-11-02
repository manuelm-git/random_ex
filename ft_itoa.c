#include <stdlib.h>
int decimalcounter(int num)
{
    int counter = 0;
    if(num == 0)
        return(0);
    if(num < 0)
        counter++;
    while (num != 0)
    {
        counter++;
        num /= 10;
    }
    return(counter);
}
char	*ft_itoa(int nbr)
{
    int size;
    char *str;

    long num = nbr;
    size = decimalcounter(nbr);

    str = malloc(size + 1);
    if(!str)
        return(0);
    str[size] = '\0';
    while(size)
    {
        if (num < 0)
            num *= -1;
        
        str[--size] = (num % 10) + '0';
        num /= 10;
    }
    if(str[0] == '0')
        str[0] = '-';
    if(nbr == 0)
        str[0] = '0';
    return(str);
}

#include <stdio.h>
#include <stdlib.h>
char	*ft_itoa(int nbr);

int main(int argc, char **argv)
{
    (void)argc;
    printf("%s\n", ft_itoa(atoi(argv[1])));
    return (0);
}