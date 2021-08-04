#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int fila,col,i,j;
	int mat[50][50],suma;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #62: Leer los elementos de una matriz, imprimirlos e imprimir la suma de sus filas.  \n");
	printf("\n Ingrese la cantidad de filas: ");
	scanf("%d",&fila);
	printf("\n Ingrese la cantidad de columnas: ");
	scanf("%d",&col);
	for(i=0;i<fila;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\n Ingrese el valor de la casilla: %d, %d: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	suma=0;
	for(i=0;i<fila;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\n MATRIZ=%d, ",mat[i][j]);
			suma=suma+mat[i][j];
		}
	}
	printf("\n SUMA=%d",suma);
	getche();	
}
