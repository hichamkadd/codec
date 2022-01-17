/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 07:18:14 by hkaddour          #+#    #+#             */
/*   Updated: 2021/10/15 07:24:54 by hkaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	
	i = 0;
	if (ac >= 2)
	{
		ac--;
		while (av[ac][i] != '\0')
		{
			write(1, &av[ac][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
