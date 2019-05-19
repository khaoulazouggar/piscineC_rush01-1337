/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 22:26:14 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/20 22:50:46 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		exist_box(int arr[9][9], int srow, int scol, int num)
{
	int	row;
	int	col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (arr[srow + row][scol + col] == num)
				return (1);
			col++;
		}
		row++;
	}
	return (0);
}
