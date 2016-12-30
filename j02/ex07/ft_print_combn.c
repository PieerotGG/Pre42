/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      ft_print_combn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierreguthauser@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016-12-29 20:34 by pierre               #+#    #+#             */
/*   Updated: 2016-12-29 20:34 by pierre              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/ 

void ft_putchar(int c);

void	ft_putnbr_r(int nb)
{
	if (nb < -9)
		ft_putnbr_r(nb / 10);
	ft_putchar(-(nb % 10) + '0');
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
		nb = -nb;
	else
		ft_putchar('-');
	ft_putnbr_r(nb);
	ft_putchar('\n');
}

int		ft_int_digit_nbr(int i)
{
	int 	digit_number;

	digit_number = 0;
	while (i != 0)
	{
		i /= 10;
		digit_number++;
	}
	return (digit_number);
}



char 	ft_is_ascending(int i, int n)
{
	int		last;
	int 	count;

	last = 10;
	count = 0;
	while (42)
	{
		if (i == 0)
			break;
		count++;
		if (i % 10 >= last)
			return (0);
		last = i % 10;
		i /= 10;
	}
	return (count == n);
}

void	ft_print_combn(int n)
{
	int 	current;
	int 	digit_number;
	digit_number = ft_int_digit_nbr(n);
	current = 0;
	while (1)
	{
		current++;
		if (ft_int_digit_nbr(current) == n && ft_is_ascending(current, n))
		{
			ft_putnbr(current);
		}
	}
}
