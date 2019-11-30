/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 18:18:53 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/09 18:11:29 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int n;
	int k;

	i = 0;
	n = ft_strlen(needle);
	if (haystack == needle)
		return ((char*)haystack);
	if (n == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			j = 0;
			while (haystack[k++] == needle[j] && needle[j] != '\0')
				j++;
			if (j == n)
				return ((char*)(&(haystack[i])));
		}
		i++;
	}
	return (0);
}
