/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:44:27 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/21 10:44:36 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
	{
		return (0);
	}
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*nstr;
	char	*ret;
	int		i;

	if (s2[0] == '\0')
		return (0);
	i = 0;
	nstr = (char *)malloc(sizeof(char) * ft_strlen(s1) + BUFFER_SIZE + 1);
	ret = nstr;
	if (nstr == 0)
	{
		free(nstr);
		return (NULL);
	}
	while (s1 != 0 && s1[i] != 0)
		*nstr++ = s1[i++];
	if (s1 != 0)
		free(s1);
	while (s2 != 0 && *s2 != 0 && *s2 != '\n')
		*nstr++ = *s2++;
	if (*s2 == '\n')
		*nstr++ = '\n';
	*nstr = 0;
	return (ret);
}

int	ft_find_nl(char *str)
{
	int	i;
	int	j;
	int	new_line;

	i = 0;
	j = 0;
	new_line = 0;
	while (str[i] != 0 && str[i] != '\n')
		str[i++] = '\0';
	if (str[i] == '\n')
	{
		new_line = 1;
		str[i++] = '\0';
		while (str[i] != 0)
		{
			str[j++] = str[i];
			str[i++] = '\0';
		}
	}
	return (new_line);
}
