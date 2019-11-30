#include <stdio.h>
#include "libft.h"

int main()
{
	char str[] = "            Hello World          privet";
	char **split;
	int i;
	
	i = 0;
	split = ft_strsplit(str, ' ');
	while (split[i])
		printf("%s\n", split[i++]);
	return (0);
}
