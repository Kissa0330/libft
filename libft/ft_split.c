/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:18:26 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_strs(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			if (i > 0 && str[i - 1] != c)
				count ++;
		}
		i ++;
	}
	if (i > 0 && str[i - 1] != c)
		count ++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*str;
	int		count;
	int		i;
	int		j;

	i = 0;
	count = count_strs(s, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (strs == NULL)
		return (strs);
	strs[count] = NULL;
	str = ft_strdup(s);
	while (i < count)
	{
		while (*str == c)
			str ++;
		j = 0;
		while (str[j] != c && str[j] != '\0')
			j ++;
		str[j] = '\0';
		strs[i ++] = ft_strdup(str);
		str = str + ft_strlen(str) + 1;
	}
	return (strs);
}
