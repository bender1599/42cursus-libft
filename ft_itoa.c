#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	ft_lenght(int n )
{
	int i ;

	i  = 0;
	if(n<0)
		i++;
	while(n /=10)
		i *=10;
	return i;
}
size_t ft_size(int nb)
{
	int i ;

	i = 1 ;
		while(nb /=10)
			i*=10;
		return i;

}
static char*	ft_Rnegatif(char* s ,int size,int n, int i)
{
	unsigned int nb;

	nb = -n;
	s[i] = '-';
	i++;
		while(size)
		{
			s[i++] = (nb/size) +'0';
			nb%=size;
			size /=10;
		}
		s[i] = '\0';
		return s;
}
char*	ft_itoa(int n)
{
	int i ;
	size_t size;
	char* s;

	i = 0;
	size =ft_size(n);

	if(!(s = malloc(sizeof(char)*(ft_lenght(n)+1))))
		return NULL;

		if(n <0)
			return(ft_Rnegatif(s,size,n,i));
		else if(n >= 0)
		{
			while(size)
			{
				s[i++] = (n/size)+'0';
				n %= size;
				size /= 10;
			}
			s[i++] ='\0';
		}
		return(s);
}
int	main(void)
{
	char* htr = ft_itoa(-548511);
	printf("%s",htr);
		return EXIT_SUCCESS;
}


