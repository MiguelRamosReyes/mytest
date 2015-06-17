#include <stdio.h>
int funcion(int num)
{
int a,b,c,d;
a=1;b=0;c=0;d=1;
int temp;
	while (num>0)
	{
		if (num%2!=0)
		{
			temp=(b*d);
			b=(a*d)+(b*c)+temp;
			a=(a*c)+temp;
		}	
		temp=(d*d);
		d=(2*c*d)+temp;
		c=(c*c)+temp;
		num=num/2;	
	}
	return (b);
}
int main()
{
	int num;
	printf("numero de la serie de fibbonaci ");
	scanf("%i",&num);
	printf("el valore es: %d\n",funcion(num));
}