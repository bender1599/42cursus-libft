#include "libft.h"
size_t	ft_strlen(const char* str)
{
	unsigned int size;

	size = 0;
		if(!str)
			return 0;
		while(str[size])
			size++;
		return (size);
}
