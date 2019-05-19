/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 21:48:04 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/20 23:08:58 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_sudoku(int arr[9][9]);
int		exist_box(int arr[9][9], int row, int col, int num);
int		is_safe(int arr[9][9], int row, int col, int num);
int		exist_row(int arr[9][9], int row, int num);
int		exist_col(int arr[9][9], int col, int num);
int		solve(int arr[9][9]);

int		is_safe(int arr[9][9], int row, int col, int num)
{
	if (exist_box(arr, (row - (row % 3)), (col - (col % 3)), num) == 0
			&& exist_row(arr, row, num) == 0
			&& exist_col(arr, col, num) == 0)
		return (1);
	return (0);
}

int		find_zeros(int arr[9][9], int *row, int *col)
{
	while (*row < 9)
	{
		*col = 0;
		while (*col < 9)
		{
			if (arr[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int		solve(int arr[9][9])
{
	int	row;
	int	col;
	int	num;

	row = 0;
	col = 0;
	if (find_zeros(arr, &row, &col) == 0)
		return (1);
	num = 1;
	while (num <= 9)
	{
		if (is_safe(arr, row, col, num) == 1)
		{
			arr[row][col] = num;
			if (solve(arr) == 1)
				return (1);
			arr[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int	arr[9][9];
	int	i;
	int	c;

	i = -1;
	if (ac != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (++i < 9)
	{
		c = -1;
		while (++c < 9)
		{
			if (av[i + 1][c] == '.')
				av[i + 1][c] = '0';
			arr[i][c] = av[i + 1][c] - 48;
		}
	}
	if (solve(arr) == 1)
		print_sudoku(arr);
	else if (solve(arr) == 0)
		ft_putstr("Error\n");
	return (0);
}
