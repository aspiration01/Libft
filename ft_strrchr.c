/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 14:24:39 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/07 15:15:08 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > -1)
	{
		if (s[i] == (char)c)
			return ((char*)&(s[i]));
		i--;
	}
	if (s[i] == (char)c)
		return ((char*)&(s[i]));
	return (NULL);
}
