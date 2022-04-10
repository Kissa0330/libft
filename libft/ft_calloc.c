/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:32:04 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:33 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void *res;

	res = malloc(count * size);
	if(res == NULL)
		return (NULL);
	else
		ft_bzero(res, count * size);
	return (res);
}