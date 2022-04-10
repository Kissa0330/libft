/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:03:05 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
size_t	ft_strlen(char *str);

int	trim_start(char *str, char *set)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	while (str[i] != '\0')
	{
		flag = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (str[i] == set[j])
				flag = 1;
			j ++;
		}
		if (flag == 1)
			i++;
		else
			break ;
	}
	return (i);
}

char	*trim_end(char *str, char *set)
{
	int	len;
	int	i;
	int	j;
	int	flag;

	len = ft_strlen(str);
	i = 1;
	while (str[len - i] != '\0')
	{
		flag = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (str[len - i] == set[j])
				flag = 1;
			j ++;
		}
		if (flag == 1)
			i++;
		else
			break ;
	}
	str[len - i + 1] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*tosearch;
	char	*res;
	int		start;
	int		i;

	str = (char *)s1;
	tosearch = (char *)set;
	start = trim_start(str, tosearch);
	res = malloc((ft_strlen(str) - start) * sizeof(char));
	if (res == NULL)
		return (res);
	i = 0;
	while (str[start + i] != '\0')
	{
		res[i] = str[start + i];
		i++;
	}
	return (trim_end(res, tosearch));
}
