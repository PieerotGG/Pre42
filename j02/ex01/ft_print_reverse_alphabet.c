/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*      ft_print_reverse_alphabet.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierreguthauser@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016-12-29 17:07 by pierre               #+#    #+#             */
/*   Updated: 2016-12-29 17:07 by pierre              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/ 

void	ft_putchar(int c);

void	ft_print_reverse_alphabet(void)
{
	char	current_char;
	current_char = 'z';	

	while (current_char >= 'a')
	{
		current_char--;
		ft_putchar(current_char);
	}
}
