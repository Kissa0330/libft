/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:30:25 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*t;
	char	*ret;
	int		flag;

	t = (char *)s;
	ret = t;
	while (*t != '\0')
	{
		if (*t == c)
		{
			ret = t;
			flag = 1;
		}
		t++;
	}
	if (c == '\0')
		return (t);
	if (*t == '\0' && flag != 1)
		return (NULL);
	return (ret);
}
