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

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

char	*get_min(char *s, int n)
{
	static char ref[] = "0123456789";
	int		i;

	i = -1;
	while (++i < n)
		s[i] = ref[i];
	return (s);
}

char	*increment(char *s, int n, char start)
{
	int		i;

	if (!start)
		return (get_min(s, n));
	i = n;
	while (--i > 0)
	{
		if (s[i] - '0' < 10 - (n - i))
			break;
	}
	if (!i && s[i] - '0' == 10 - n)
		return ((char *)0);
	s[i]++;
	while (++i < n)
		s[i] = s[i - 1] + 1;
	return (s);
}

void	ft_print_combn(int n)
{
	char	s[10];
	char	i;
	char	j;

	i = 0;
	while (increment(s, n, i))
	{
		if (i++)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		j = 0;
		while (j < n)
			ft_putchar(s[j++]);
	}
	ft_putchar('\n');
}

int		main()
{
	ft_print_combn(2);
	return 0;
}
