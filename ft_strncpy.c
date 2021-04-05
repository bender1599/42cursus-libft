#include "libft.h"
char* ft_strncpy(char* dest,const char* src, size_t n)
{
	int i;

	i = 0;
	while(src[i] != '\0' && i < n)
	{
		*dest = src[i];
		*dest++;
		i++;
	}
		*dest = '\0';
		return (dest);
}



