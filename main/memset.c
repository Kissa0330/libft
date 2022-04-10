/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:39:18 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/13 20:01:04 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void *ft_memset(void *buf, int ch, size_t n);

int main(void)
{
	char str[] = "0123456789";
	char str2[] = "0123456789";
	int test[4] = {1,2,3,4};
	int test2[4] = {1,2,3,4};

	printf("%s\n", memset(test, '1', 0));
	printf("%s\n", ft_memset(test2, '*', 0));
	printf("%s\n", str);
	printf("%s\n", str2);

	return 0;
}