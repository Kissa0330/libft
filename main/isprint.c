/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:28:21 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/11 23:33:57 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
#include "stdio.h"
int ft_isprint(int i);
int main(void)
{
	// int i;
	// i = argv[1][0];
	printf("isprint value is %d\n", isprint(31));
	printf("ft_isprint value is %d\n", ft_isprint(31));
	printf("isprint value is %d\n", isprint(127));
	printf("ft_isprint value is %d\n", ft_isprint(127));
	// return argc;
}