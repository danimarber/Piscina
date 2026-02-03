/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*By: dmarcos- <dmarcos@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:57:22 by dmarcos-          #+#    #+#             */
/*   Updated: 2026/01/21 19:45:23 by dmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else 
	{
		write(1, "N", 1);
	}
		
}

int main(void)
{
        ft_is_negative(1);
}
