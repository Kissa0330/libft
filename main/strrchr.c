/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:16:44 by rtakano           #+#    #+#             */
/*   Updated: 2021/10/14 22:21:03 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strrchr(char *str, char c);
int main(int argc, char *argv[])
{
	printf("ft_strrchr = %s\n",ft_strrchr(argv[1], argv[2][0]));
	printf("strrchr = %s\n",strrchr(argv[1], argv[2][0]));
	return argc;
}