/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:17:28 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/14 20:18:37 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strchr(char *str, char c);
int main(int argc, char *argv[])
{
	printf("ft_strchr = %s\n",ft_strchr(argv[1], argv[2][0]));
	printf("strchr = %s\n",strchr(argv[1], argv[2][0]));
	return argc;
}