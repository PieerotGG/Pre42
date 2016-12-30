/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      ft_print_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierreguthauser@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016-12-29 17:10 by pierre               #+#    #+#             */
/*   Updated: 2016-12-29 17:10 by pierre              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

void	ft_putchar(int c);

void	ft_print_numbers(void)
{
	char	current;
	current = 0;

	while (current <= 10)
	{
		current++;
		ft_putchar(current);
	}
}
