/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: serhouni <serhouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:48:46 by serhouni          #+#    #+#             */
/*   Updated: 2022/10/23 19:33:59 by serhouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*firstnode;
	t_list	*newtnode;

	if (lst == 0 || del == 0 || f == 0)
		return (0);
	firstnode = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst != 0)
	{
		newtnode = ft_lstnew(f(lst->content));
		if (newtnode == 0)
		{
			ft_lstclear(&firstnode, del);
			return (0);
		}
		ft_lstadd_back(&firstnode, newtnode);
		lst = lst->next;
	}
	return (firstnode);
}
