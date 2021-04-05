#include "libft.h"
static int	ft_is_spaces(int c)
{
	return(( c >= 9 && c <= 13)|| c == 32);
}
int	ft_atoi(const char* str)
{
	int	 signe;
	int	 res ;

	signe = 0;
	res = 0;
		while(ft_is_spaces(*str))
			str++;
		if(*str == '-')
		{
			signe = 1;
			str++;
		}
		if(*str == '+' && *str == '-')
			str++;
				while(*str != '\0' && ft_isdigit(*str))
				{
					res *= 10;
					res += ((int)*str  -'0');
					str++;
				}
				if(signe)
					return(-res);
				else
					return(res);
}

