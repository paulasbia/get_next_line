/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:23:54 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/20 15:47:40 by pde-souz         ###   ########.fr       */
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
	nstr = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	printf("s1 no strjoin vale: %s\n", s1);
	printf("s2 no strjoin vale: %s\n", s2);
	ret = nstr;
	if (nstr == 0)
		return (NULL);
	while (s1 != 0 && s1[i] != 0)
		*nstr++ = s1[i++];
	if (s1 != 0)
		free(s1);
	i = 0;
	while (s2 && *s2)
	{
		*nstr++ = *s2++;
		if (*s2 == '\n')
			break ;
		i++;
	}
	*nstr = 0;
	return (ret);
}

void	ft_clean_buffer(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
		buffer[i++] = 0;
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
