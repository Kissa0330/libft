/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:03:51 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/14 20:04:06 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int ft_tolower(int c);
int main(int argc, char const *argv[])
{
	printf("tolower = %c\n", tolower(argv[1][0]));
	printf("tolower = %c\n", ft_tolower(argv[1][0]));
	return (argc);
}