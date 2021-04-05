#include "libft.h"
void	ft_bzero(void* s ,size_t n)
{
	unsigned char* suc;
	
	suc = (unsigned char*)s;
		while(0 < n)
		{
			*suc = 0;
			n--;
			suc++;
		}
	s = suc;
}	

