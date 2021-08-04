#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int n,i,j;
	int x[50],aux;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #61: Hacer un vector y ordenar sus datos de forma ascendente e imprimirlos. \n");
	printf("\n Ingrese la cantidad de elementos del vector: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\t Ingrese el valor del elemento %d: ",i);
		scanf("%d",&x[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[j]>x[i])
			{
				aux=x[i]; x[i]=x[j]; x[j]=aux;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",x[i]);
	}
	getche();
}
