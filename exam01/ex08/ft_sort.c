#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;
	
	i = 0;
	while(i < size - 1)
	{
		j = 0;
		while ( j < size - 1 - i)
			{
				if(tab[j] > tab[j+1])
				{
					temp = tab[j];
					tab[j] = tab[j+1];
					tab[j+1] = temp;
				}
				j++;
			}
		i++;
	}
}
int main()
{	
	int tab[] = {10,58,76,30,40};
	ft_sort_int_tab(tab,5);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
}
	
		
