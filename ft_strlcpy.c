#include "libft.h"
size_t ft_strlcpy(char* dest,char* src,size_t n)
{
	size_t src_len;

	
	src_len = ft_strlen(src);
	

		while(*src && n - 1)
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
			*dest = '\0';
			return(src_len);
}

