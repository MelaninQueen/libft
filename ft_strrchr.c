/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:30:33 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 15:31:29 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		idx;
	char	*s1;
	char	*p;

	s1 = (char *)s;
	idx = 0;
	p = NULL;
	while (s1[idx] != '\0')
	{
		if (s1[idx] == (char)c)
			p = (s1 + idx);
		idx++;
	}
	return (p);
}
