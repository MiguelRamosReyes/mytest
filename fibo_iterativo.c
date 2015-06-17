#include <stdio.h>
int funcion(int num)
{
	int temp=0;
	int i=1;
	int j=0;
	int k=0;
		for(;k<num;k++)
		{
			temp=i+j;
			i=j;
			j=temp;
		}
		return j;

}
int main()
{
	int num;
	printf("numero de la serie de fibbonaci ");
	scanf("%i",&num);
	printf("el valore es: %d\n",funcion(num));
}