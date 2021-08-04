#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int fila,col,i,j,m[30][30];
	float suma, prom,n;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #71: Leer una matriz cuadrada, calcular e imprimir el promedio de sus elementos. \n");
	suma=0;
	do
	{
		printf("\n Ingrese la cantidad de filas: ");
		scanf("%d",&fila);
		printf("\n Ingrese la cantidad de columnas: ");
		scanf("%d",&col);
		if(fila!=col)
		{
			printf("\n \t LAS FILAS Y COLUMNAS DEBEN SER IGUALES");
		}
	}
	while(fila!=col);
	for(i=1;i<=fila;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf("\n Ingrese el valor de la casilla: %d, %d: ",i,j);
			scanf("%d",&m[i][j]);
			suma=suma+m[i][j];
		}
	}
	n=fila*col;
	prom=suma/n;
	printf("\n \t PROMEDIO DE LOS ELEMENTOS=%f",prom);
	getche();
}
