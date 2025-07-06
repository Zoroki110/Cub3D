/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinawara <sinawara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:23:10 by sinawara          #+#    #+#             */
/*   Updated: 2025/04/02 17:36:37 by sinawara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	print_error(char *error_message)
{
	printf("Error\n");
	printf("%s\n", error_message);
}

int	print_return_error(char *error_message, int return_value)
{
	printf("Error\n");
	printf("%s\n", error_message);
	return (return_value);
}

int	print_return_free(char *error_message, int return_value, char *line)
{
	printf("Error\n");
	printf("%s\n", error_message);
	free(line);
	return (return_value);
}
