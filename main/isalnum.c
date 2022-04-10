/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:20:38 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/11 21:21:57 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
#include "stdio.h"
int ft_isalnum(int i);
int main(int argc, char *argv[])
{
	int i;
	i = argv[1][0];
	printf("isalnum value is %d\n", isalnum(i));
	printf("ft_isalnum value is %d\n", ft_isalnum(i));
	return argc;
}