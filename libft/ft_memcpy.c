/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:42:10 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i = 0;
	unsigned char *str = (unsigned char *)src;
	unsigned char *res = (unsigned char *)dst;
	while (i < n)
	{
		*res++ = *str++;
		i++;
	}
	return dst;
}
