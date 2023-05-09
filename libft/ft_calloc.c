/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itchinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:48:10 by itchinda          #+#    #+#             */
/*   Updated: 2022/11/26 18:03:37 by itchinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;
	size_t	total;

	i = 0;
	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size && nmemb / SIZE_MAX > size)
		return (NULL);
	str = (void *)malloc(total);
	if (!str)
		return (NULL);
	while (i < total)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
