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
char *ft_strchr(const char *str, char c);
int main(int argc, char *argv[])
{
	char s[] = "tripouille";
	printf("t + 256 = %c\n",'t' + 256);
	printf("ft_strchr = %s\n",ft_strchr(s, 't' + 256));
	printf("strchr = %s\n",strchr(s, 't' + 256));
	return argc;
}