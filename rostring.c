#include <unistd.h>
#include <stdio.h>
int main(int argc,char **argv)
{
	int i = 0;
	int start = 0;
	int end = 0;
	int flag = 0;
	if(argc >= 2)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while(argv[1][i] != '\t' && argv[1][i] != ' ' && argv[1][i] != '\0')
			i++;
		end = i;
		while(argv[1][i] != '\0')
		{
			while(argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				flag = 1;
				i++;
			}
			while (argv[1][i] != '\t' && argv[1][i] != ' ' && argv[1][i] != '\0')
			{
				write(1,&argv[1][i],1);
				i++;
			}
			if(flag == 1 && (argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t'))
				write(1," ",1);
		}

		while (start < end && argv[1][start] != '\0')
		{
			write(1,&argv[1][start],1);
			start++;
		}
		
	}
	write(1,"\n",1);
}