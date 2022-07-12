/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:16:28 by jopedro2          #+#    #+#             */
/*   Updated: 2022/06/22 20:42:23 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p;
	size_t	i;
	size_t	n;

	i = 0;
	p = (char *)big;
	if (little[0] == '\0')
		return (p);
	while (p[i] != '\0')
	{
		n = 0;
		while (p[i + n] == little[n] && (i + n) < len)
		{
			if (p[i + n] == '\0' && little[n] == '\0')
				return (&p[i]);
			n++;
		}
		if (little[n] == '\0')
			return (p + i);
		i++;
	}
	return (0);
}
