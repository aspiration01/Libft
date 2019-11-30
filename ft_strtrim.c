/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:36:39 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/22 16:58:02 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_memory(const char *s, int *l, int *i)
{
	char	*str;

	while (s[*i] == ' ' || s[*i] == '\n' || s[*i] == '\t' || s[*i] == ',')
		(*i)++;
	while (s[*l - 1] == ' ' || s[*l - 1] == '\n'
			|| s[*l - 1] == '\t' || s[*l - 1] == ',')
		(*l)--;
	if (*i > *l)
		*i = 0;
	str = (char*)malloc(sizeof(char) * (*l - *i) + 1);
	if (str == NULL)
		return (0);
	return (str);
}

char		*ft_strtrim(const char *s)
{
	int		i;
	int		j;
	int		l;
	char	*s1;

	if (s == NULL)
		return (0);
	i = 0;
	j = 0;
	l = ft_strlen(s);
	s1 = ft_memory(s, &l, &i);
	if (s1 == NULL)
		return (0);
	if (s[i] == '\0')
		s1[i] = s[i];
	while (i < l)
		s1[j++] = s[i++];
	s1[j] = '\0';
	return (s1);
}
