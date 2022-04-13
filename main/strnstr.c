/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:42:46 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/14 22:46:07 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strnstr(char *str, char *c, size_t t);
int main(int argc, char *argv[])
{
	printf("ft_strnstr = %s\n", ft_strnstr("abbbcdefg", NULL, 20));
	// printf("strnstr = %s\n", strnstr("abbbcdefg", NULL, 20));
	return argc;
}