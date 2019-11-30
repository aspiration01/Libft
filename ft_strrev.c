/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:22:01 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/23 16:36:58 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	char	*rev;
	int		j;

	j = 0;
	i = ft_strlen(str);
	rev = (char*)malloc(sizeof(char) * i + 1);
	if (rev == NULL)
		return (NULL);
	rev[i] = '\0';
	while (--i > -1)
	{
		rev[i] = str[j];
		j++;
	}
	return (rev);
}
