#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
		}
	return dest;
}
int main()
{
	char src[] = {"Barev"};
	char dest[5];
	unsigned int n = 4;
	ft_strncpy(dest,src,n);
	printf("%s\n", dest);
}

