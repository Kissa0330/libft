/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:10:51 by rtakano           #+#    #+#             */
/*   Updated: 2021/11/08 17:12:30 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char **ft_split(char *str, char c);

int main(int argc, char *argv[])
{
	int i;
	char **strs;

	i = 0;
	strs = ft_split(NULL, argv[2][0]);
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i ++;
	}
	return (argc);
}
