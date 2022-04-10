/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:30:52 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
size_t	ft_strlen(char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*res;
	size_t	i;

	str = (char *)s;
	if ((size_t)start >= ft_strlen(str) || len == 0)
		return ("");
	res = malloc(len * sizeof(char));
	str = str + start;
	i = 0;
	while (i < len && str[i])
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}
