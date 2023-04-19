/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:52:45 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/19 13:53:39 by pde-souz         ###   ########.fr       */
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
		printf("vai para strjoin\n\n\n");
		str = ft_strjoin(str, buffer, c);
        c = read(fd, buffer, BUFFER_SIZE);
	}
	return (str);
}
