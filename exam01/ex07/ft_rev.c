#include <stdio.h>
void	ft_rev(int *tab, int size)
{
	int	i;
	int	j;
	int temp;
	j = size - 1;
	i = 0;
	while(i < j){
		
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
int main(){
	int tab[] = {10,20,45,78};
	ft_rev(tab,4);
		printf("%d",tab[0]);
		 printf("%d",tab[1]);
		  printf("%d",tab[3]);
}
