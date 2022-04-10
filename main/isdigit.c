/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:14:26 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/11 21:22:07 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
#include "stdio.h"
int ft_isdigit(int i);
int main(int argc, char *argv[])
{
	int i;
	i = argv[1][0];
	printf("isdigit value is %d\n", isdigit(i));
	printf("ft_isdigit value is %d\n", ft_isdigit(i));
	return argc;
}