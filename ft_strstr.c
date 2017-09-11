/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:09:07 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 18:18:50 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strstr(const char *s1, const char *s2)
{
	size_t i;
	size_t e;

	i = 0;
	e = 0;
	if (s2[0] == '\0' || s2 == NULL)
		return ((char*)s1);
	if (s1 && s2)
	{
		while (s1[i] != '\0')
		{
			e = 0;
			while (s1[i] == s2[e])
			{
				e++;
				i++;
				if (e == ft_strlen(s2))
					return ((char*)&s1[i - (ft_strlen(s2))]);
			}
			i++;
		}
	}
	return (NULL);
}
