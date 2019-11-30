/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 17:12:03 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/22 15:12:33 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int nn;

	nn = (long int)n;
	if (nn < 0)
	{
		ft_putchar_fd('-', fd);
		nn = nn * -1;
	}
	if (nn < 10)
	{
		ft_putchar_fd(nn % 10 + '0', fd);
		return ;
	}
	ft_putnbr_fd(nn / 10, fd);
	ft_putchar_fd(nn % 10 + '0', fd);
}
