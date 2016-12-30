/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      ft_print_comb2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierreguthauser@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016-12-29 19:26 by pierre               #+#    #+#             */
/*   Updated: 2016-12-29 19:26 by pierre              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/ 


void 	ft_putchar(int c);

void	ft_print_comb2(void)
{
	int		i;

	i = 1;
	while (i < 10000){
		ft_putchar(i/1000+'0');
		ft_putchar((i/100)%10+'0');
		ft_putchar(' ');
		ft_putchar((i/10)%10+'0');
		ft_putchar(i%10+'0');
		if (i == 9899)
			break;
		ft_putchar(',');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}
