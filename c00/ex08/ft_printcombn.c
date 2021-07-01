/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcombn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:40:47 by jremy             #+#    #+#             */
/*   Updated: 2021/07/01 18:49:55 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int n);
void ft_print_array(int *array,int size);
void ft_print_number(int y);
void ft_init_array(int *array, int i, int n, int y);


int main () {

    ft_print_combn(2);
}

void ft_print_combn(int n)
{
    int        i;

    int array[9];
    i = -1;
    while ( i++ < n -1)
        array[i] = i; 
    while (array[0] != 10 - (n - 1))
    {   
        i = n -1;
        ft_print_array(array, n -1);
            if(array[i] == 9)
            {
                ft_init_array(array, i, n -1, 10 - n);
            }
            if (array[i] <= array[i-1])
                array[i] =  array[i-1] + 1;
            else
                array[i]++;
    }
}

void ft_print_array(int *array, int size)
{
    int        i;
    i = -1;

    while( i++ < size)
        ft_print_number(array[i]);
        write(1, ", ", 1);
}

void ft_print_number(int y)
{
    int c = y + '0';
    write(1, &c, 1);
}

void ft_init_array(int *array, int i, int n, int y)
{
    array[i] = 0;
    i --;
    array[i]++;
    while ( i >= 0)
    {
        if (array[i] > i + y)
        {
            array[i] =  0;
            i--;
            array[i]++;
        }

        else
        {
            while ( i < n)
            {
                i++;
                array[i] = array[i-1] + 1;
            }
            i = n;
            array[i] = 0;
            break;
        }
    }
}
