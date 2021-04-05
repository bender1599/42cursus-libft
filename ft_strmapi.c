#include "libft.h"
char*	ft_strmapi(char const*	s,char(*f)(unsigned int ,char))
{
	unsigned int i;
	char*	str;

	i = 0 ;
		if(!s)
			return 0;
		if(!(str = malloc(sizeof(char)*(ft_strlen(s)+1))))
			return NULL;
		while(i < ft_strlen(s))
		{
			str[i] = (*f)(i,s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
}



