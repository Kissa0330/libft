/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:21:49 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count1;
	size_t	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (src[count2] != '\0')
	{
		dest[count1 + count2] = src[count2];
		count2++;
	}
	if (count1 >= size)
	{
		dest[count1] = '\0';
		return (size + count2);
	}
	else if (count1 + count2 >= size)
	{
		dest[size - 1] = '\0';
	}
	dest[count1 + count2] = '\0';
	return (count1 + count2);
}
