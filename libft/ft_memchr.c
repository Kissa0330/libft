/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 00:04:34 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i = 0;
	unsigned char *res = (unsigned char *)s;
	unsigned char sc = (unsigned char)c;
	while (i < n)
	{
		if (*res == sc)
			return (res);
		res++;
		i++;
	}
	return (NULL);
}