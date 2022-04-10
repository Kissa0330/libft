/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:06:05 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/13 17:56:47 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
size_t ft_strlen(char *str);
int main(int argc, char *argv[])
{
	printf("ft_strlen = %zu\n",ft_strlen(argv[1]));
	printf("strlen = %zd\n",strlen(argv[1]));
	return argc;
}
