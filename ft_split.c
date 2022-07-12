/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 00:45:43 by jopedro2          #+#    #+#             */
/*   Updated: 2022/07/04 18:12:18 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(const char *s, char c)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (s[i1] != '\0')
	{
		if (s[i1] != c && i1 == 0)
			i2++;
		if (s[i1] == c && s[i1 + 1] != '\0' && s[i1 + 1] != c)
			i2++;
		i1++;
	}
	return (i2);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		n;
	int		holder;
	char	**split;

	i = 0;
	n = 0;
	split = (char **)malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!s || !split)
	{
		free (split);
		return (NULL);
	}
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		holder = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > holder)
			split[n++] = ft_substr((s + holder), 0, (i - holder));
	}
	split[n] = NULL;
	return (split);
}
