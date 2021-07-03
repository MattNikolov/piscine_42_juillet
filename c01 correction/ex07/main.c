#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main() {
	int tab[8];
	int y;
	y = 0;
	for (int i	= 8; i >= 0; i--)
	{
		tab[i] = y;
		y++;
		}
	
	for (int i = 0; i <= 8; i++)
	printf("%d ",tab[i]);

	ft_rev_int_tab(tab,8);
	printf("\n");
	for (int i = 0; i <=  8; i++)
		printf("%d ",tab[i]);
}

