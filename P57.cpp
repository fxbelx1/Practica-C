#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int i, vector[100];
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #57: Almacenar los numeros del 1 al 100 en un arreglo unidimensional e imprimirlos. \n");
	for(i=1;i<=100;i++)
	{
		vector[i]=i;
		printf("\n %d",vector[i]);
	}
	getche();
}
