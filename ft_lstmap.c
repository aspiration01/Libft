/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschimme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 11:43:33 by dschimme          #+#    #+#             */
/*   Updated: 2019/02/22 15:53:20 by dschimme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free(void *content)
{
	free(content);
}

static t_list	*ft_first(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first_elem;

	first_elem = (t_list*)malloc(sizeof(t_list));
	if (first_elem == NULL)
		return (NULL);
	first_elem = f(lst);
	return (first_elem);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*buf;
	t_list	*first_elem;

	if (lst == NULL || f == NULL)
		return (NULL);
	first_elem = ft_first(lst, f);
	if (first_elem == NULL)
		return (NULL);
	new = first_elem;
	lst = lst->next;
	while (lst)
	{
		buf = new;
		new = (t_list*)malloc(sizeof(t_list));
		if (new == NULL)
		{
			ft_lstdel(&first_elem, (void*)ft_free);
			return (NULL);
		}
		new = f(lst);
		buf->next = new;
		lst = lst->next;
	}
	return (first_elem);
}
