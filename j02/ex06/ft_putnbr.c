/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierreguthauser@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016-12-29 20:25 by pierre               #+#    #+#             */
/*   Updated: 2016-12-29 20:25 by pierre              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/ 


void	ft_putchar(int c);

void	ft_putnbr(int nb)
{
	if (nb >= 0)
		nb = -nb;
	else
		ft_putchar('-');
	ft_putnbr_r(nb);
	ft_putchar('\n');
}
		
void	ft_putnbr_r(int nb)
{
	if (nb < -9)
		ft_putnbr_r(nb / 10);
	ft_putchar(-(nb % 10) + '0');
}
