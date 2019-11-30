/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:59:54 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/09 17:29:34 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t j;
	size_t i;
	size_t len_dst;
	size_t len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	j = 0;
	if (size <= len_dst)
		return (len_src + size);
	if (size == len_dst + 1)
		return (len_dst + len_src);
	dst = dst + len_dst;
	i = 0;
	j = size - len_dst - 1;
	while (i < j && *src)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = 0;
	return (len_dst + len_src);
}
