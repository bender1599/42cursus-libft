#include "libft.h"
char*	ft_strrchr(const char* s,int c)
{
	size_t i ;

	i  = ft_strlen(s);
		while(s[i] != c && i )
			i--;
			if(s[i] == ((unsigned char)c))
				return((char*)s +i);
			return 0;
}


