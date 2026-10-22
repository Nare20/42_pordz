#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a / b;
	*div = a % b;
}
int main(){
	int mod;
	int div;
	int a;
	int b;
	a = 10;
	b = 5;
	ft_div_mod(a,b,&div,&mod);
	printf("%d\n%d\n",mod,div);
}


