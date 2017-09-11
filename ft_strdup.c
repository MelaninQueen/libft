/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 16:08:23 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 16:08:40 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dup = (char *)malloc(sizeof(char) * i + 1);
	if (!dup)
		return (0);
	while (s1[i] >= 0)
	{
		dup[i] = s1[i];
		i--;
	}
	return (dup);
}
