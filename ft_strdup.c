#include <stdlib.h>
#include "libft.h"
char*	ft_strdup(const char* str)
{
	int len ;
	char* copy ;

	len = ft_strlen(str);
	copy = (char*)malloc(sizeof(char)*(len  + 1 ));
			if(copy == NULL)
				return (NULL);
			else
				copy = strcpy(copy,str);
				return (copy);
}

