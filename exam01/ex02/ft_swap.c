#include <stdio.h>
void	ft_swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a = 12;
	int b = 14;
	ft_swap(&a,&b);
	printf("a = %d, b = %d\n", a, b);
			}
