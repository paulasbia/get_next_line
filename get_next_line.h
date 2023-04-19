/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:54:14 by pde-souz          #+#    #+#             */
/*   Updated: 2023/04/19 10:54:47 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#define BUFFER_SIZE 5

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char    *get_next_line(int fd);
int     ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif