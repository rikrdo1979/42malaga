#include<stdio.h>

void	ft_ft(int *nbr)
{
	printf("2 - Dir de la X enviada a la f(x) ---> %p\n", nbr);
	*nbr = 42;
	printf("3 - Valor dado a la X en la f(x) ---> %d\n", *nbr);
	printf("4 - Dir de la propia variable puntero nbr ---> %p\n", &nbr);
}
int	main(void)
{
	int x = 2022;
	printf("1 - Valor inicial de X ---> %d\n", x);
	ft_ft(&x);
	printf("5 - Dir de la variable x ---> %p\n", &x);
	printf("6 - Valor cargado en X desde la f(x) ---> %d\n", x);
	return (0);
}
