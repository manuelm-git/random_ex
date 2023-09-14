#include <unistd.h>
int main(int argc,char **argv)
{
    if(argc >= 2)
    {
        int i = 1;
        int j = 0;
        while (i <= argc - 1)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\0'))
                {
                    argv[i][j] -= 32;
                }
                else if ((argv[i][j] >= 'A' && argv[i][j] <= 'Z') && (argv[i][j + 1] != ' ' && argv[i][j + 1] != '\0'))
                {
                    argv[i][j] += 32;
                }
                write(1,&argv[i][j],1);
                argv[i]++;
            }
            write(1,"\n",1);
            i++;
        }
    }
    else
        write(1,"\n",1);
}