#include "libft.h"
static void	ft_print_nbr(int nb,int fd)
{
	int num;
	int lenght;

	lenght = 1;
	num = nb ;
		while((num/= 10) > 0)
			lenght *=10;
		while(lenght)
		{
			ft_putchar_fd((char)((nb/lenght)+'0'),fd);
			nb %= lenght;
			lenght /= 10;
		}
}		
void	ft_putnbr_fd(int n ,int fd)
{
	if(n == -2147483648)
		write(fd,"-2147483648",11);
	if(n >= 0)
		ft_print_nbr(n,fd);

	if(n < 0 && n > -2147483648)
		{
			n = - n;
			ft_putchar_fd('-',fd);
			ft_print_nbr(n,fd);
		}
	
}

