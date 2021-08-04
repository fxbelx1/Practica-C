#include<stdio.h>
#include<math.h>
#include<conio.h>

void leemat();
void impmat();
void mayor();
int mat[50][50];
int i,j,fila,col;

main()
{
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #70: Leer matriz de igual numero de filas y columnas e imprimir el elemento mayor y en que casilla se ubica. \n");
	leemat();
	printf("\n \n MATRIZ: ");
	impmat();
	mayor();
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

void mayor()
{
	int m,f,c;
	for(i=1;i<=fila;i++)
	{
		for(j=1;j<col;j++)
		{
			if(mat[i][j]<mat[i][j+1])
			{
				m=mat[i][j+1];
				f=i; c=j+1;
			}
		}
	}
	printf("\n \n MAYOR=%d   CASILLA=%d, %d",m,f,c);
	return;
}

