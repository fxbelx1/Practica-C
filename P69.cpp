#include<stdio.h>
#include<math.h>
#include<conio.h>

void leemat();
void impmat();
int mat[50][50];
int fila,col,i,j;

main()
{
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #69: Matriz de iguale numero filas y columnas e imprimir. \n");
	leemat();
	printf("\n \n MATRIZ: ");
	impmat();
	getche();
}

void leemat()
{
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
			printf("\n Ingrese el valor de la casilla %d, %d: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
return;
}

void impmat()
{
	printf("\n");
	for(i=1;i<=fila;i++)
	{
		printf("\n");
		for(j=1;j<=col;j++)
		{
			printf("%5d",mat[i][j]);
		}
	}
	return;
}
