/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:08:01 by rtakano           #+#    #+#             */
/*   Updated: 2021/11/09 22:09:08 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strtrim(char const *s1, char const *set);
int main(int argc, char *argv[])
{
	printf("ft_strtrim = %s\n", ft_strtrim(argv[1], argv[2]));
	return argc;
}