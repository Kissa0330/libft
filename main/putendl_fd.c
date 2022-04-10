/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendl_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:28:09 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:40:22 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
size_t ft_strlen(char *str);
void ft_putendl_fd(char *s, int fd);

int main(int argc, char *argv[])
{
	printf("S = %s\n", argv[1]);
	write(1, argv[1], ft_strlen(argv[1]));
	printf("\n");
	ft_putendl_fd(argv[1], 1);
	return argc;
}