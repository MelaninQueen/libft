/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 16:03:30 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 16:03:58 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len;
	size_t	idx;

	idx = 0;
	len = ft_strlen(dst);
	if (len > n)
		return (ft_strlen(src) + n);
	else
	{
		ft_strncat(dst, src, n - len - 1);
	}
	return (len + ft_strlen(src));
}
