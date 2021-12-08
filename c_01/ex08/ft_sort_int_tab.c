/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feozturk <feozturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:36:17 by feozturk          #+#    #+#             */
/*   Updated: 2021/12/01 13:36:22 by feozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tut;
	int	gez;
	int	d;

	d = 0;
	gez = 1;
	while (d != (size - 1))
	{
		gez = 1;
		d = 0;
		while (gez < size)
		{
			if (tab[gez] < tab[gez - 1])
			{
				tut = tab[gez];
				tab[gez] = tab[gez - 1];
				tab[gez - 1] = tut;
			}
			else
				d++;
			gez++;
		}
	}
}
