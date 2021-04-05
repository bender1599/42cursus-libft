#include "libft.h"
int	ft_memcmp(const void* s1 ,const void* s2 ,size_t n)
{
	size_t i;

	i = 0;
		if(!(s1) || !(s2))
			return 0;
		while(((char*)s1)[i] != '\0' && i < n )
		{
			if(((char*)s1)[i] != ((char*)s2)[i])
				return((((unsigned char*)s1)[i]) - (( unsigned int*)s2)[i]);
			i++;
		}
			return 0;
}
	

