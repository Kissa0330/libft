/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:27:18 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/11 21:31:03 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
#include "stdio.h"
int ft_isascii(int i);
int main(void)
{
	printf("isascii value is %d\n", isascii(0));
	printf("ft_isascii value is %d\n", ft_isascii(0));

	printf("isascii value is %d\n", isascii(-1));
	printf("ft_isascii value is %d\n", ft_isascii(-1));

	printf("isascii value is %d\n", isascii(127));
	printf("ft_isascii value is %d\n", ft_isascii(127));

	printf("isascii value is %d\n", isascii(128));
	printf("ft_isascii value is %d\n", ft_isascii(128));
	return 0;
}