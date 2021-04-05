#include <stdio.h>
char*	ft_strstr(char* str ,const char* to_find)
{
	int 	i;

	i = 0;
		while(str[i] != '\0')
		{
			if(str[i] == *to_find)
				return(str + i);
			i++;
		}
		return 0;
}
int	main(void)
{
	printf("%s",ft_strstr("ayoub Hakam","H"));
		return 0;
}
