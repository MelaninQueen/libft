/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:37:34 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 15:38:21 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	b;

	i = 0;
	if (little[0] == '\0' || little == NULL)
		return ((char*)big);
	while (big[i] != '\0' && i < n)
	{
		b = 0;
		if (big[i] == little[b])
		{
			while (big[i + b] == little[b])
			{
				if (!little[b + 1] && (i + b) < n)
					return ((char*)big + i);
			}
			b++;
		}
		i++;
	}
	return (NULL);
}
