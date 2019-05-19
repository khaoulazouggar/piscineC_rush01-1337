/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 22:22:34 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/20 22:25:30 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		exist_col(int arr[9][9], int col, int num)
{
	int	row;

	row = 0;
	while (row < 9)
	{
		if (num == arr[row][col])
			return (1);
		row++;
	}
	return (0);
}
