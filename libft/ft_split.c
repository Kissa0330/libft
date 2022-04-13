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

int	count_strs(char *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			if (i > 0 && str[i - 1] != '\0')
				count ++;
			str[i] = '\0';
		}
		i ++;
	}
	if (i > 0 && str[i - 1] != '\0')
		count ++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*str;
	char	*copy_str;
	int		count;
	int		i;

	i = 0;
	str = (char *) s;
	copy_str = ft_strdup(str);
	count = count_strs(copy_str, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (strs == NULL)
	{
		free(copy_str);
		return (strs);
	}
	strs[count] = NULL;
	while (i < count && str)
	{
		while (*copy_str == '\0')
			copy_str++;
		strs[i++] = ft_strdup(copy_str);
		copy_str = copy_str + ft_strlen(copy_str);
	}
	return (strs);
}
