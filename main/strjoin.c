/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:33:24 by rtakano           #+#    #+#             */
/*   Updated: 2021/11/08 16:38:24 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strjoin(char const *s1, char const *s2);

int main(int argc, char const *argv[])
{
	printf("ft_strjoin = %s\n",ft_strjoin(argv[1], argv[2]));
	return argc;
}