#include "libft.h"
char*	ft_strnstr(const char* haystack,const char* needle,size_t len)
{
	size_t i;
	size_t needle_len ;

	i = 0;
	needle_len = ft_strlen(needle);

	if(len == 0)
		return NULL;
	if ((!*needle && !needle_len)||!*needle)
		return ((char*)haystack);
	if(ft_strlen(haystack)<needle_len)
		return 0;
	while(i < len + 1)
	{
		if((!(ft_strncmp((haystack+i),needle,needle_len))))
			return((char*)haystack+i);
		len --;
		i++;
	}
		return 0;
}

