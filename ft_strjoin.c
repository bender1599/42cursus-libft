#include "libft.h"
char*	ft_strjoin(char const* s1,	char const* s2)
{
	char* 	c ;
	size_t  i;
	size_t  j;
	size_t len ;
	
	i = 0;
	j = 0;;
	len = (ft_strlen(s1)) +(ft_strlen(s2));
	if(!(c = malloc(sizeof(char)*(len + 1))))
		return NULL;
		ft_memmove(c,s1,ft_strlen(s1));
		ft_memmove(c+ft_strlen(s1),s2,ft_strlen(s2));
		c[len- 1] = '\0';
		return(c);
}

