/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:54:18 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*res;
	unsigned char	tmp;

	i = 0;
	str = (unsigned char *)src;
	res = (unsigned char *)dst;
	while (i < len)
	{
		tmp = *str++;
		*res++ = tmp;
		i++;
	}
	return (dst);
}
