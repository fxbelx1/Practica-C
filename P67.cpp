#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int a,cont,k,i,j,v[30];
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #67: Almacenar los primeros 4 numeros perfectos e imprimirlos. \n");
	for(i=1;i<9000;i++)
	{
		cont=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				cont=cont+j;
			}
		}
		if(cont==i)
		{
			a++;
			printf("\n %d",i);
		}
	}
	a=a+0;
	printf("%d",a);


	getche();
}
