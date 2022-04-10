/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   touppper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:57:31 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/14 19:59:48 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
int ft_toupper(int c);
int main(int argc, char const *argv[])
{
	printf("toupper = %c\n", toupper(argv[1][0]));
	printf("toupper = %c\n", ft_toupper(argv[1][0]));
	return (argc);
}
