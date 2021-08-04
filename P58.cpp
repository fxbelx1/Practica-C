#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int n,i,vector[50];
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #58: Leer n numeros y posteriormente imprimirlos de forma inversa. \n");
	printf("Ingrese la cantidad de elementos del vector: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t Ingrese el valor del elemento %d: ",i);
		scanf("%d",&vector[i]);
	}
	for(i=n;i>=1;i--)
	{
		printf("\n \t %d",vector[i]);
	}
	getche();
}
