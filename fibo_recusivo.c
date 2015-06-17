#include <stdio.h>
int funcion(int num)
{
	if (num<2)
		return num;
	return funcion(num-1)+funcion(num-2);
}
int main()
{
	int num;
	printf("numero de la serie de fibbonaci ");
	scanf("%i",&num);
	printf("el valore es: %d\n",funcion(num));
}