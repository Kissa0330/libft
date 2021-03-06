/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:41:26 by rtakano           #+#    #+#             */
/*   Updated: 2021/11/09 20:43:26 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len);
int	ft_atoi(const char *str);
int main(int argc, char *argv[])
{
	printf("ft_substr = %s\n", ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
	return argc;
}