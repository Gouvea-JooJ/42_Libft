/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:12:46 by jopedro2          #+#    #+#             */
/*   Updated: 2022/06/22 23:31:14 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nblen(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		n *= -1;
		len ++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*p;
	int			len;
	long int	m;

	m = n;
	len = nblen(m);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	p[len--] = '\0';
	if (m == 0)
		p[0] = '0';
	if (m < 0)
	{
		m *= -1;
		p[0] = '-';
	}
	while (m > 0)
	{
		p[len--] = (m % 10) + '0';
		m /= 10;
	}
	return (p);
}
