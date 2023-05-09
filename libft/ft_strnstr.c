/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itchinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:00:57 by itchinda          #+#    #+#             */
/*   Updated: 2022/11/25 13:20:04 by itchinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*l;
	char	*b;
	size_t	i;
	size_t	j;

	l = (char *)little;
	b = (char *)big;
	if (!*l)
		return ((char *)big);
	i = 0;
	if (len == 0)
		return (NULL);
	while (b[i] && i < len)
	{
		if (b[i] == l[0])
		{
			j = 0;
			while (l[j] && ((i + j) < len) && b[i + j] == l[j])
				j++;
			if (!l[j])
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
