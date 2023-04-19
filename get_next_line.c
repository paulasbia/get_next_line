/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:52:45 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/19 19:53:25 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*str;
	char	buffer[BUFFER_SIZE];
	int		c;

	c = read(fd, buffer, BUFFER_SIZE);
	str = 0;
	printf("teste na gnl \n");
	while (c > 0)
	{
		str = ft_strjoin(str, buffer, c);
		printf("o str é \"%s\"\n", str);
		c = read(fd, buffer, BUFFER_SIZE);
	}
	printf("o retorno é %s\n", str);
	return (str);
}
