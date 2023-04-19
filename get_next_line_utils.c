/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:23:54 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/19 13:08:21 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
	{
		return (0);
	}
	while (str[i] != 0 && str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*nstr;
	char	*ret;

	nstr = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	ret = nstr;
	if (nstr == 0)
		return (NULL);
	while (s1 != 0 && *s1 != 0)
	{
		*nstr = *s1;
		nstr++;
		s1++;
	}
	while (*(s2 + 1) != 0)
	{
		*nstr = *s2;
		if (*(s2) == '\n')
		{
			break ;
		}
		nstr++;
		s2++;
	}
	*nstr = 0;
	return (ret);
}
