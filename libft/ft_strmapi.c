/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itchinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:17:38 by itchinda          #+#    #+#             */
/*   Updated: 2022/11/25 15:30:09 by itchinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int c, char a))
{
	char	*s2;
	size_t	i;

	if (!s || !f)
		return (NULL);
	if (s)
	{
		s2 = ft_strdup((const char *)s);
		if (!s2)
			return (NULL);
		i = 0;
		while (s2[i])
		{
			s2[i] = f((unsigned int)i, s2[i]);
			i++;
		}
		return (s2);
	}
	else
		return (NULL);
}
