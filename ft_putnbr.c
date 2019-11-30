/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:57:43 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/20 15:00:05 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int nn;

	nn = (long int)n;
	if (nn < 0)
	{
		ft_putchar('-');
		nn = nn * -1;
	}
	if (nn < 10)
	{
		ft_putchar(nn % 10 + '0');
		return ;
	}
	ft_putnbr(nn / 10);
	ft_putchar(nn % 10 + '0');
}
