/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 16:30:31 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 16:31:14 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*s1;
	char			*s2;
	char			*s3;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
	s3 = 0;
	while (i < n && s3 == 0)
	{
		s1[i] = s2[i];
		if (s2[i] == ((char)c))
			s3 = s1 + i + 1;
		i++;
	}
	return (s3);
}
