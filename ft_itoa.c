/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:11:15 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/22 16:53:52 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_n_null(void)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * 1 + 1);
	if (str == NULL)
		return (0);
	else
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
}

static void		ft_n_negative(long int *nn, int *i, int *sign)
{
	*nn = *nn * (-1);
	*i = 1;
	*sign = 1;
}

static char		*ft_mem(long int nn, int sign, int *i)
{
	char	*str;

	while (nn != 0)
	{
		(*i)++;
		nn = nn / 10;
	}
	str = (char*)malloc(sizeof(char) * (*i) + 1);
	if (str == NULL)
		return (0);
	if (sign == 1)
		str[0] = '-';
	str[*i] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	nb;
	int			sign;
	long int	nn;

	nn = 0;
	sign = 0;
	i = 0;
	if (n == 0)
		return (ft_n_null());
	nn = (long int)n;
	if (nn < 0)
		ft_n_negative(&nn, &i, &sign);
	nb = nn;
	str = ft_mem(nn, sign, &i);
	if (str == NULL)
		return (0);
	while (i > sign)
	{
		str[i - 1] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	return (str);
}
