/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   noars.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuhan <seuhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:39:51 by seuhan            #+#    #+#             */
/*   Updated: 2022/07/14 03:28:11 by seuhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	the_noar(char	*line)
{
	free(line);
	exit(0);
}
