/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <dschimme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 18:17:41 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/22 16:56:57 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_size(char const *s, char c)
{
	int		count;
	int		j;
	int		len;
	char	**str;

	j = 0;
	len = 0;
	while (s[j] != '\0')
	{
		count = 0;
		while (s[j] != c && s[j] != '\0')
		{
			j++;
			count++;
		}
		if (count != 0)
			len++;
		if (s[j] != '\0')
			j++;
	}
	if ((str = (char**)malloc(sizeof(char*) * len + 1)))
		str[len] = NULL;
	return (str);
}

static void		ft_free(char **str, int *b)
{
	while (*b > 0)
	{
		free(str[*b - 1]);
		(*b)--;
	}
	free(*str);
}

static void		ft_strsplit_helper(char **str, char const *s, char c)
{
	int j;
	int b;
	int count;
	int k;

	j = -1;
	b = 0;
	while (s[++j] != '\0')
	{
		count = 0;
		while (s[count + j] != c && s[count + j])
			count++;
		if (count != 0)
		{
			if (!(str[b] = (char *)malloc(sizeof(char) * count + 1)))
				ft_free(str, &b);
			k = -1;
			while (++k < count)
				str[b][k] = s[j + k];
			j += k - 1;
			str[b][k] = '\0';
			b++;
		}
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char **str;

	if (s == NULL)
		return (0);
	if (!(str = ft_size(s, c)))
		return (0);
	ft_strsplit_helper(str, s, c);
	return (str);
}
