/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnqisha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:20:36 by nnqisha           #+#    #+#             */
/*   Updated: 2017/09/11 15:22:23 by nnqisha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		cnt;
	char	*str;

	if (s == NULL)
		return (NULL);
	cnt = ft_strlen(s);
	while (s[cnt - 1] == ' ' || s[cnt - 1] == '\t' || s[cnt - 1] == '\n')
		cnt--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		cnt--;
	if (cnt <= 0)
		cnt = 0;
	str = (char*)malloc(sizeof(char) * (cnt + 1));
	if (str == NULL)
		return (NULL);
	s += cnt;
	cnt = -1;
	while (++i <= cnt)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
