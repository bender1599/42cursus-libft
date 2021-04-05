#include "libft.h"

char*	ft_strcpy(char* dest,const char* src)
{
	int i;
	int j;
	
	i = 0;
		while(src[i] != '\0')
		{
			*dest = *src;
			*dest++;
			*src++;
		}
		*dest = '\0';
		return (dest);
}

