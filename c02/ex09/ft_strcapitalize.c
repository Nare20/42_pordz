#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int new_word = 1;
	i = 0;
	while(str[i] != '\0')
	{  	if (str(i) >= 'A' && str[i] <= 'Z'&& new_word == 0)
		{
			str[i] = str[i] + 32;
		}
		if(str[i] >= 'a' && str[i] <= 'z')
		if i
}
int main()
{
	char str [] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}

