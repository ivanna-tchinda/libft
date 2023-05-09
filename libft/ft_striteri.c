/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itchinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:30:49 by itchinda          #+#    #+#             */
/*   Updated: 2022/11/25 18:47:58 by itchinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int a, char *c))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (*s)
	{
		(*f)(i, s);
		s++;
		i++;
	}
	return ((void)s);
}
