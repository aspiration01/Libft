/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 18:22:43 by dschimme          #+#    #+#             */
/*   Updated: 2019/03/02 17:40:11 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			j;
	long long	sum;
	int			sign;
	int			count;

	j = 0;
	count = 0;
	sign = 1;
	sum = 0;
	while ((str[j] >= 9 && str[j] <= 13) || str[j] == 32 || str[j] == 0)
		j++;
	while (str[j] == '+' || str[j] == '-')
	{
		j++;
		count++;
	}
	if (count >= 2 || str[j] < '0' || str[j] > '9')
		return (0);
	if (str[j - 1] == '-')
		sign = -1;
	while (str[j] != '\0' && (str[j] >= '0' && str[j] <= '9'))
		sum = sum * 10 + str[j++] - '0';
	if (sum < 0)
		return (sign == -1 ? 0 : -1);
	return (sum * sign);
}
