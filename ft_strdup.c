/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heusebio <heusebio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 11:19:31 by heusebio          #+#    #+#             */
/*   Updated: 2020/05/15 21:30:33 by heusebio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		n;
	int		i;
	char	*dst;
	char	*s1;

	i = ft_strlen((char *)s);
	s1 = (char *)s;
	dst = (char*)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (NULL);
	n = 0;
	while (n < i)
	{
		dst[n] = s1[n];
		n++;
	}
	dst[n] = '\0';
	return (dst);
}
