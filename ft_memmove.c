#include "libft.h"
void*	ft_memmove(void* dest ,const void* src ,size_t n)
{
	 char* temp_str1 ;
	char* d;
	const char* s;
       const char* temp_str2;

	temp_str1 = dest ;
	temp_str2 = src;
	d = temp_str1 + (n -1);
	s = temp_str2 +(n-1);
	if(!temp_str1 && !temp_str2)
		return 0;
	if (d < s)
		return (ft_memcpy(temp_str1,temp_str2,n));
	while(--n)
		*d-- = *s--;
	return(dest);
}
