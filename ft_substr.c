#include "libft.h"
char*	ft_substr(char	const* s,unsigned int start,size_t len)
{
	char*	p;
	size_t i ;
	
	i = 0;
	
	if(!(p = (char*)malloc(sizeof(char)*(len+1))))
		return NULL;
	while(s[start + i] != '\0' && len )
	{
		p[i] = s[start + i];
		i++;
		len--;
	}
		return(p);
}
