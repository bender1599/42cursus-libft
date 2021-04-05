#include "libft.h"
void*	ft_memset(void* s,int c,size_t n)
{
	size_t i ;

	i = 0;
	//while(i < n)
	while(((char*)s)[n] != '\0')
	{
		((char*)s)[n] =((unsigned char)c);
		n--;
		//i++;
	}
		return(s);
}


