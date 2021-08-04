#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int n,i;
	int vector[75];
	float suma;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #56: Programa que lea los elementos de un vector, los imprima e imprima la suma de estos. \n");
	printf("\n Dame la cantidad de elementos del vector: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\t Dame el valor del emento %d: ",i);
		scanf("%d",&vector[i]);
	}
	suma=0;
	for(i=0;i<n;i++)
	{
		suma=suma+vector[i];
	}
	printf("\n \t SUMA=%f",suma);
	getche();
}
