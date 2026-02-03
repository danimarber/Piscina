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

void ft_print_numbers(void)
{
        int    num;
        num = 0;

        while (num <= '9')
        {
        write(1, &num, 1);

        num++;
        }
}

int main(void)
{
        ft_print_numbers();
}
