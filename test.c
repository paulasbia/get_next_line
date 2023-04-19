/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:02:22 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/19 13:56:50 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	count(void)
{
	static int	num = 0;

	num++;
	return (num);
}

int	main(void)
{
	int		fd;
	char	*line;

	printf("%d\n", count());
	printf("%d\n", count());
	fd = open("teste.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("o fd é %d\n", fd);
	printf(" line 1 %s\n\n", line);
	free(line);
}
