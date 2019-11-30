/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 18:18:59 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/22 15:10:00 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	else
	{
		while (--n && *s1 && *s2 && ((unsigned char)*s1 == (unsigned char)*s2))
		{
			++s1;
			++s2;
		}
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
