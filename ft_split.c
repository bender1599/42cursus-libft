#include <stdio.h>
#include <stdlib.h>


static int	ft_tab_alloc( char* str ,char c)
{
	int count;

	count = 0;
	while(*str != '\0')
	{
		if(*str == c )
			*str++;
		else if(*str != c)
		{
			count++;
			*str++;
		}
		*str++;
	}
		return (count);
}
static int	ft_string_alloc( char* str ,int* k,char c)
{
	int count ;

	count = 0;
		while(str[*k] != '\0')
		{
			if(str[*k] == c)
				*k += 1;
			else
			{
				while(str[*k] != '\0' && str[*k] != c)
				{
					*k+=1;
					count++;
				}
			
			*k +=1;
			return(count);
			}
		}
		return 0;
}
static char**	ft_append(char** tab, char* str,char c ,int i)
{
	int j ;
	int k ;

	j = 0;
	while(str[i] != '\0')
	{
		k = 0;
		while(str[i] == c)
			i++;
		if(str[i] == '\0')
			break;
		while(str[i] != '\0' && str[i] != c)
		{
			tab[j][k] = str[i];
			k++;
			i++;
			if(str[i] =='\0')
				break;
		}
		tab[j][k] = '\0';
		j++;
	}
		tab[j] = 0;
		return(tab);
}
static	void	ft_free(char** tab,int o)
{
	while(o)
	{
		free(tab[o]);
		o--;
	}
		free(tab);
}
char**	ft_split(const char *str ,char c)
{
	int 	i;
	int	j;
	int	p;
	int*	k;
	char**	tab;

	i = 0;
	j = 0;
	p = 0;
	k = &p;
	if(!str)
		return 0;
	if(!(tab =malloc(sizeof(char*)*(ft_tab_alloc((char*)str,c)+1))))
		return 0;

	while(j < ft_tab_alloc((char*)str , c))
	{
	if(!(tab[j] = (malloc(sizeof(char)*(ft_string_alloc((char*)str,k,c)+1)))))
       		{
			ft_free(tab,j);
				return (0);
		}
		j++;
	}

			ft_append(tab,(char*)str,c,i);
				return(tab);
}
int	main(void)
{
	char** tab ;
	unsigned int i ;
	
	i = 0;
	tab = ft_split("ayoub=popsoda=Bender=Chmiko  ta3amol=chabab o dima rijal",'=');
		while(i < 5)
		{
			if(i < 5)
				printf("%s ",tab[i]);
			else
				printf("%s",tab[i]);
			i++;
		}
			return EXIT_SUCCESS;
}

