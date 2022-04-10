/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 00:01:22 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/14 00:15:43 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void *ft_memchr(const void *s, int c, size_t n);

int main(int argc, char *argv[])
{
	int array1[5] = {0, 1, 2, 3, 4};;

	printf("%d\n", memchr(array1, 3, sizeof(array1)));

	printf("%d\n", ft_memchr(array1, 3, sizeof(array1)));

	printf("memchr = %s\n", memchr(argv[1], argv[2][0], 3));
	printf("ft_memchr = %s\n", ft_memchr(argv[1], argv[2][0], 3));
	return 0;
}
