#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int i,j,cont,m,k,v[20];
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #66: Almacenar los primeros 20 numeros primos e imprimirlos de forma inversa.  \n");
	cont=0; m=0;
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=100;j++)
		{
			for(k=1;k<=j;k++)
			{
				if(j%k==0)
				{
					cont++;
				}
			}
			if(cont==2)
			{
				m=m+j;
			}
		}
		v[i]=j;
		m=0;
	}
	for(i=1;i<=20;i++)
	{
		printf("%d ,",v[i]);
	}
	getche();
}
