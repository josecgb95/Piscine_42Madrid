/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayague-a <ayague-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:18:10 by ayague-a          #+#    #+#             */
/*   Updated: 2025/07/27 22:56:16 by ayague-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	dict_size(void) // Hacer que el diccionario sea argumento
{
	// En caso de no tener un buen imput defaultear a "numbers.dict"
	int		fd;
	int		count;
	char	c;
	
	count = 0;
	fd = open("numbers.dict", O_RDWR);
	while (read(fd, &c, 1) == 1)
		count++;
	close(fd);
	return (count);
}

char	*dict_to_str(char *dicc)
{
	char	*str;
	char	c;
	int		fd;
	int		i;
	
	fd = open(dicc, O_RDWR);
	if (fd < 0)
		return("psoe momento"); //Cambiar mensaje
	i = 0;
	str = malloc(sizeof (char) * dict_size());// Revisar argumento de dict_size
	if (str == NULL)
		return("error en el malloc"); //Cambiar mensaje
	str[i++] = '\n';
	while (read(fd, &c, 1) == 1)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	close(fd);
	return (str);
}

char	*format_str(char *strnt)
{
	int		i;
	int		j;
	char	*str;
	
	i = 0;
	j = 0;
	while (strnt[i])
	{
		if (!(strnt[i] == ' '))
			j++;
		i++;
	}
	str = malloc (sizeof (char) * i);
	i = 0;
	j = 0;
	while (strnt[i])
	{
		if (strnt[i] == ' ')
			i++;
		else
		str[j++] = strnt[i++];
	}
	return (str);
}

