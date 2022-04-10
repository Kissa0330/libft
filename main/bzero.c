/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:41:00 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/14 19:47:21 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
void ft_bzero(void *s, size_t n);
int main(int argc, char *argv[])
{
	char *argvcpy = argv[1];
	bzero(argv[1], 1);
	ft_bzero(argvcpy,1);
	printf("bzero value is %s\n", argv[1]);
	printf("ft_bzero value is %s\n", argvcpy);
	printf("bzero value is %s\n", argv[1] + sizeof(char) * 2);
	printf("ft_bzero value is %s\n", argvcpy + sizeof(char) * 2);
	return argc;
}