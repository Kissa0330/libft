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

char	*tostr(unsigned int n, int len, int negativeflag)
{
	char	*res;

	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	while (0 <= len --)
	{
		res[len] = n % 10 + '0';
		n /= 10;
	}
	if (negativeflag == 1)
		res[0] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	int		len;
	int		negativeflag;
	long	i;

	len = 1;
	negativeflag = 0;
	i = n;
	if (n < 0)
	{
		i = n * -1;
		negativeflag = 1;
		len ++;
	}
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	return (tostr(i, len, negativeflag));
}
