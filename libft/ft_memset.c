/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:38:33 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memset(void *buf, int ch, size_t n)
{
	size_t i = 0;
	unsigned char c = ch;
	unsigned char *str = (unsigned char *)buf;
	while (i < n)
	{
		*str++ = c;
		i ++;
	}
	return buf;
}