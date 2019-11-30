/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strCdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 17:18:27 by dschimme          #+#    #+#             */
/*   Updated: 2019/03/12 18:00:20 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *s1, char c)
{
	char	*s;
	int		i;

	i = 0;
	while (s1[i] != '\0' && s1[i] != c)
		i++;
	s = (char*)malloc(sizeof(char) * i + 1);
	if (s == NULL)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s1[i] != c)
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
