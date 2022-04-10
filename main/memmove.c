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
	int array1[5] = {0, 1, 2, 3, 4};
	int array2[5];
	int array3[5];

	memmove(array2, array1, sizeof(array1));
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", array2[i]);
	}
	printf("\n");

	ft_memmove(array3, array1, sizeof(array1));

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", array3[i]);
	}
	printf("\n");

	return 0;
}
