/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:05:24 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/09 16:31:05 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_striteri(char *s, void (*f)(unsigned int, char *));
void test(unsigned index, char *target)
{
	printf("index is %u\ntarget is %c\n", index, *target);
	*target = *target + 1;
}
int main(int argc, char *argv[]) {
	void (*f)(unsigned int, char *) = 0;
	f = test;
	printf("Before %s\n", argv[1]);
	ft_striteri(argv[1],f);
	printf("After %s\n", argv[1]);
	return argc;
}