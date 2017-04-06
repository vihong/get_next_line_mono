/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vi-hong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 17:00:03 by vi-hong           #+#    #+#             */
/*   Updated: 2017/04/04 20:22:24 by vi-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./test2/get_next_line.h" 


int		main(int argc, char **argv)
{
	int		fd = 0;
	int		fd2 = 0;
	char*	line = NULL;
	int		res = 0;
	char 	*str;
	int		len = 50;

	str = (char *)malloc(1000 * 1000);
	*str = '\0';
	while (len--)
		strcat(str, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur in leo dignissim, gravida leo id, imperdiet urna. Aliquam magna nunc, maximus quis eleifend et, scelerisque non dolor. Suspendisse augue augue, tempus");

	fd = open(argv[1], O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	write(fd, str, strlen(str));
	close(fd);
	fd = open(argv[1], O_RDONLY);
	fd2 = open("def123.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	if (argc != 2)
		return (0);
	while ( (res = get_next_line(fd, &line)) == 1)
		dprintf(fd2, "%s", line);
	printf("res: %d\n", res);
	close(fd);
	close(fd2);
	return (0);
}
