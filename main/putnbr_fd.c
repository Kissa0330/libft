/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:37:09 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:40:31 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
size_t ft_strlen(char *str);
void ft_putnbr_fd(int n, int fd);

int main(int argc, char *argv[])
{
	printf("S = %s\n", argv[1]);
	ft_putnbr_fd(atoi(argv[1]), 1);
	return argc;
}