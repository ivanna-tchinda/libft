/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itchinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:35:44 by itchinda          #+#    #+#             */
/*   Updated: 2022/11/26 16:40:58 by itchinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*new_elt;

	if (!f || !lst)
		return (NULL);
	lst2 = 0;
	if (lst)
	{
		while (lst)
		{
			new_elt = ft_lstnew((*f)(lst->content));
			if (!new_elt)
			{
				ft_lstclear(&lst2, del);
				return (NULL);
			}
			ft_lstadd_back(&lst2, new_elt);
			lst = lst->next;
		}
	}
	return (lst2);
}
