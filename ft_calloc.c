#include <stdlib.h>
#include "libft.h"
void*	ft_calloc(size_t nmemb,size_t size)
{
	void* a;
	int	c ;
	if(nmemb == 0 || size == 0)
		return NULL;
	if(!( a = malloc(nmemb*size)))
		return NULL;
		ft_bzero(a,c);
		return (a);
}

