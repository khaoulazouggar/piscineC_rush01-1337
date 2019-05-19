/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 22:09:22 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/20 22:45:39 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_sudoku(int arr[9][9])
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(arr[i][j] + 48);
			if (j != 8)
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
