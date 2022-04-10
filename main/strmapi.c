/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 02:47:02 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/09 16:13:48 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char test(unsigned index, char target)
{
	printf("index is %u\ntarget is %c\n", index, target);
	return target + 1;
}
int main(int argc, char *argv[]) {
	char (*f)(unsigned int, char) = 0;
	f = test;
	printf("Before %s\n", argv[1]);
	printf("After %s\n", ft_strmapi(argv[1], test));
	return argc;
}