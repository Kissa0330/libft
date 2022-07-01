/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:57:52 by rtakano           #+#    #+#             */
/*   Updated: 2021/11/01 21:00:45 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
long ft_atoi(const char *str);
int main(int argc, char *argv[])
{
	printf("ft_atoi value is %ld\n", ft_atoi(argv[1]));
	printf("atoi value is %d\n", atoi(argv[1]));
	return argc;
}