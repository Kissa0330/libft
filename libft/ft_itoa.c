/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:32:26 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*tostr(int n, int len, int negativeflag)
{
	char	*res;

	res = malloc(len * sizeof(char));
	while (0 <= len)
	{
		res[len] = n % 10 + 48;
		n /= 10;
		len --;
	}
	if (negativeflag == 1)
		res[0] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	int		negativeflag;

	len = 0;
	negativeflag = 0;
	if (n < 0)
	{
		n *= -1;
		negativeflag = 1;
		len ++;
	}
	i = n;
	while (i / 10 != 0)
	{
		len++;
		i /= 10;
	}
	return (tostr(n, len, negativeflag));
}
