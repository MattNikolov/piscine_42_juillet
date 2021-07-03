/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:51:51 by jremy             #+#    #+#             */
/*   Updated: 2021/07/03 16:04:32 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
int ft_strlen(char *str);
int main(){
	char tab[]="12345";
	printf(" la vrai strlen =>%lu \n",strlen(tab));
	printf(" la ft_strlen =>%d \n",ft_strlen(tab));
}
