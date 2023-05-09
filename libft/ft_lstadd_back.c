/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itchinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:01:10 by itchinda          #+#    #+#             */
/*   Updated: 2022/11/26 14:52:38 by itchinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst2;

	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			lst2 = ft_lstlast(*lst);
			lst2->next = new;
		}
	}	
}
