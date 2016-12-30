/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      ft_print_alphabet.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierreguthauser@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016-12-29 17:00 by pierre               #+#    #+#             */
/*   Updated: 2016-12-29 17:00 by pierre              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/ 

void	ft_putchar(int c);

void	ft_print_alphabet(void)
{
	char	current_char;
	current_char = 'a';

	while (current_char <= 'z')
	{
		current_char++;
		ft_putchar(current_char);
	}
}
