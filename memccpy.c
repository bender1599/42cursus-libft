#include "libft.h"
void*	ft_memccpy(void* dest,const void* src,int c,size_t n)
{
	unsigned char* d;
	unsigned const char* s;

	d = dest ;
	s = src ;
		while(n)
		{
			*d = *s;
			d++;
			if(*s == ((unsigned char)c))
				return (d);
			s++;
			n--;
		}
			return 0;

}

