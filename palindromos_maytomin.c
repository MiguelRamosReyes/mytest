#include <stdio.h>

void MayToMin(char cadena[])
{
	int i=0;
	int desp='a'-'A';
	for (i=0;cadena[i]!='\0';++i)
	{
		if(cadena[i]>='A'&&cadena[i]<='Z')
			cadena[i]=cadena[i]+desp;
	}
}
main()
{
	int i=0,k;
	char string[]="anitA lava la tina";
	int size=sizeof(string)-2;
	MayToMin(string); 
	printf("%d\n",size);
		for(k=0;k<size;k++,i++,size--)
		{
			if(string[i]==' ')
				i++;
			if(string[size]==' ')
				size--;
			if(string[i]!=string[size])
			{
				printf("no es palindromo\n");
				return 0;
			}	
		}
	printf("es palindromo\n");	
	return 0;
}  