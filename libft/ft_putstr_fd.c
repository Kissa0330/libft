/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtakano   <rtakano@student.42.fr    >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:23:35 by rtakano           #+#    #+#             */
/*   Updated: 2022/04/10 11:50:34 by rtakano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

size_t	ft_strlen(char *str);

void	ft_putstr_fd(char *s, int fd)
{
	size_t	length;

	length = ft_strlen(s);
	while (length > INT_MAX)
	{
		write(fd, s, INT_MAX);
		s = s + INT_MAX;
		length = length - INT_MAX;
	}
	write(fd, s, length);
}
