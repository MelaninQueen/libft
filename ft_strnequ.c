/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:41:47 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 15:42:26 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		if (n == 0 || (!*s1 && !*s2))
			return (1);
		else if ((!*s1 && *s2) || (*s1 && !*s2))
			return (0);
		if (s1 && s2)
		{
			while (i < n)
			{
				if (!s1[i] && !s2[i])
					return (1);
				if (s1[i] == s2[i])
					i++;
				else
					return (0);
			}
		}
	}
	return (1);
}
