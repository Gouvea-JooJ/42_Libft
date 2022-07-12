/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:31:06 by jopedro2          #+#    #+#             */
/*   Updated: 2022/07/04 18:12:47 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{	
	int		len;
	char	*p;

	len = 0;
	p = NULL;
	while (s[len] != '\0')
		len++;
	if (c == '\0')
		return ((char *)s + len);
	while (*s != '\0')
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	return (p);
}
