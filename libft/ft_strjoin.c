/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 00:53:52 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(char *str);

char	*ft_strcat(char *s1, char *s2)
{
	size_t	length;
	size_t	i;
	char	*str;

	i = 0;
	length = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * length);
	if (str == NULL)
		return (str);
	while (*(s1 + i) != '\0')
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	length = ft_strlen(s1);
	i = 0;
	while (*(s2 + i) != '\0')
	{
		*(str + length + i) = *(s2 + i);
		i++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	return (ft_strcat(str1, str2));
}
