/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      ft_print_comb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierreguthauser@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016-12-29 17:21 by pierre               #+#    #+#             */
/*   Updated: 2016-12-29 17:21 by pierre              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/ 

void	ft_putchar(int c);

void	ft_print_comb(void)
{
	char	numbers[3];

	numbers[0] = '0' - 1;
	while (++numbers[0] <= '7')
	{
		numbers[1] = numbers[0];
		while (++numbers[1] <= '8')
		{
			numbers[2] = numbers[1];
			while (++numbers[2] <= '9')
			{
				if (numbers[2] != '2')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(numbers[0]);
				ft_putchar(numbers[1]);
				ft_putchar(numbers[2]);
			}
		}
	}
	ft_putchar('\n');
}
