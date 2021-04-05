#include"libft.h"
void*	ft_memchr(const void* s,int c ,size_t n)
{
	unsigned char* p ;
	

	p = (unsigned char*)s;
	
		while(n)
		{
			if(*p ==(unsigned char)c)
				return ((void*)p);
			
			p++;
			n--;
		}
			return(0);
}

