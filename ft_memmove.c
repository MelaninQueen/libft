/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 16:22:41 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 16:23:14 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src1;
	char	*dst1;
	char	temp[len];

	src1 = (char *)src;
	dst1 = (char *)dst;
	i = 0;
	while (i < len)
	{
		temp[i] = src1[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst1[i] = temp[i];
		i++;
	}
	return (dst1);
}
