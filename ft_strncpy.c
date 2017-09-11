/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:42:55 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 15:50:55 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((size_t)ft_strlen((char *)src) < len)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < len)
		{
			dest[i] = '\0';
			i++;
		}
		return (dest);
	}
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
