/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:39:27 by rtakano           #+#    #+#             */
/*   Updated: 2021/11/09 23:02:43 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char *ft_itoa(int n);
int main(int argc, char *argv[])
{
	printf("ft_itoa = %s\n", ft_itoa(atoi(argv[1])));
	return argc;
}