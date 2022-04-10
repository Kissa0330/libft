/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:51:42 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:33 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	judgestrhead(char *str, int *negativeflag)
{
	int	i;

	i = 0;
	while (*(str + i) == 32)
		i++;
	if (*(str + i) == 43)
		i++;
	else if (*(str + i) == 45)
	{
		i++;
		*negativeflag = -1;
	}
	if (*(str + i) >= 48 && *(str + i) <= 57)
		return (i);
	else
		return (-1);
}

int	changestr(char *str, int headlength)
{
	int	num;
	int	tmp;
	int	i;
	int	j;
	int	k;

	i = 0;
	num = 0;
	while (--headlength > 0)
		str++;
	while (*(str + ++i) >= 48 && *(str + i) <= 57)
	{
	}
	k = 1;
	while (*(str + i - k) >= 48 && *(str + i - k) <= 57)
	{
		tmp = (*(str + i - k) - 48);
		j = 0;
		while (++j < k)
			tmp = tmp * 10;
		num += tmp;
		k ++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int		*negativeflag;
	int		headlength;
	int		a;
	char	*string;

	a = 1;
	negativeflag = &a;
	string = (char *)str;
	headlength = judgestrhead(string, negativeflag);
	if (headlength >= 0)
		return (changestr(string, headlength) * *negativeflag);
	else
		return (0);
}
