/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:53:36 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/14 00:17:51 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void *ft_memmove(void *restrict dst, const void *restrict src, size_t n);

int main(int argc, char *argv[])
{
	int array1[6] = {0, 1, 2, 3, 4, 5};
	int array2[6] = {0, 1, 2, 3, 4, 5};

	memmove(array2, array2 + 3, 3);
	for (int i = 0; i < 6; ++i)
	{
		printf("%d ", array2[i]);
	}
	printf("\n");

	ft_memmove(array1, array1 + 3, 3);

	for (int i = 0; i < 6; ++i)
	{
		printf("%d ", array1[i]);
	}
	printf("\n");

	return 0;
}
