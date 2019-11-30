/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushstk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:20:52 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/28 15:48:01 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pushstk(t_stack *stk, int a)
{
	if (stk->top < NMAX)
	{
		stk->elem[stk->top] = a;
		stk->top++;
	}
	else
		ft_putstr("Stack is full\n");
}
