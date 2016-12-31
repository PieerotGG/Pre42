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


void 	ft_putchar(int c);

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
}


char 	ft_is_valid(int i, int n)
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

int		ft_maximum_value(int n)
{
	int		max;
	int		current;

	max = 10 - n;
	current = max;
	while (++current <= 9)
	{
		max = (max * 10) + current;
	}
	return max;
}

void	ft_print_combn(int n)
{
	int 	current;
	int 	max_value;

	if(n == 0)
		return;
	current = -1;
	max_value = ft_maximum_value(n);
	while (max_value > current)
	{
		current++;
		if (ft_is_valid(current, n))
		{
			ft_putnbr(current);
			if (max_value != current)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar('\n');
}

