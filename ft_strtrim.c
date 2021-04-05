#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t	ft_strlen(const char* str)
{
	size_t o ;

	o = 0;
		while(str[o] != '\0')
			o++;
		return o;
}
char*   ft_strchr(const char* s,int c)
{
        size_t i;

        i = ft_strlen(s);

                while(i)
                {
                        if(*s == (unsigned char)c)
                                return((void*)s);
                        i--;
                        s++;
                }
                        return 0;
}
char*   ft_strdup(const char* str)
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
char*	ft_trimcopy(const char* s , char* str , size_t end, int start)
{
	int i ;
	i = 0;
	while(start < end+1)
	{
		str[i]  = s[start];
		i++;
		start++;
	}
		str[i] ='\0';
		return(str);
}
char*	ft_strtrim(char const* s1,char const* set)
{
	int start ;
	int end;
	char*	str;

	start = 0;
	end = ft_strlen(s1);
	if(!s1)
		return NULL;
	if(!set)
		return(ft_strdup(s1));
		while(s1[start] != '\0')
		{
			if(ft_strchr(set,s1[start]))
				break;
			start++;
		}
		while(s1[end] != s1[start])
		{
			if(ft_strchr(set,s1[end]))
				break;
			end--;
		}
		if(!(str = malloc(sizeof(char)*((end-start)+2))))
			return 0;
		return(ft_trimcopy(s1,str,end,start));
}
int	main(void)
{
	char htr [] = "ayoub+Hakam+rick";
	char* ptr = htr;
	ft_strtrim(ptr,"+");
		
		return EXIT_SUCCESS;
}





