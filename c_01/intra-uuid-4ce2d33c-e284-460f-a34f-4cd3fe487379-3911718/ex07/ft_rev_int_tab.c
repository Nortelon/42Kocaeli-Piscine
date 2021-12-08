/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feozturk <feozturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:35:08 by feozturk          #+#    #+#             */
/*   Updated: 2021/12/05 05:21:47 by feozturk         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	artan_index;
	int	azalan_index;
	int	rev;

	artan_index = 0;
	azalan_index = size - 1;
	while (artan_index < (size / 2))
	{
		rev = tab[azalan_index];
		tab[azalan_index] = tab[artan_index];
		tab[artan_index] = rev;
		artan_index++;
		azalan_index--;
	}
}
