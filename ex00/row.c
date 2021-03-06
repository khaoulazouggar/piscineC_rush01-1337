/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 22:22:27 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/20 22:24:27 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		exist_row(int arr[9][9], int row, int num)
{
	int	col;

	col = 0;
	while (col < 9)
	{
		if (num == arr[row][col])
			return (1);
		col++;
	}
	return (0);
}
