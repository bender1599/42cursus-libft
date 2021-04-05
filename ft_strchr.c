#include "libft.h"
char*	ft_strchr(const char* s,int c)
{
	size_t i;

	i = ft_strlen(s);

		while(i)
		{
			if(*s == (unsigned char)c)
				return((void*)s);
			i--;
			s++;
		}
			return 0;
}

