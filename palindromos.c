#include <stdio.h>
main()
{
	int i=0,k;
	char string[]="anita lava la tina";
	int size=sizeof(string)-2;
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