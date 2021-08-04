#include<stdio.h>
#include<math.h>
#include<conio.h>

void leemat();
void impmat();
void intdiag();
void impnmat();
int fila,col,i,j;
int mat[50][50];

main()
{
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #63: Intercambiar diagonales de una matriz. \n");
	leemat();
	printf("\n IMPRESION MATRIZ ORIGINAL: ");
	impmat();
	intdiag();
	printf("\n IMPRESION NUEVA NATRIZ: ");
	impnmat();
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
			printf("\n EL NUMERO DE FILAS Y COLUMNAS DEBE SER EL MISMO");
		}
	}
	while(fila!=col);
	for(i=0;i<fila;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Ingrese el valor de la casilla %d, %d: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	return;
}

void impmat()
{
	printf("\n \n");
	for(i=0;i<fila;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%5d",mat[i][j]);
		}
	}
	return;
}

void intdiag()
{
	int a;
	for(i=0;i<fila;i++)
	{
		a=mat[i][i]; mat[i][i]=mat[i][fila-i-1]; mat[i][fila-i-1]=a;
	}
	return;
}

void impnmat()
{
	printf("\n \n");
	for(i=0;i<fila;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%5d",mat[i][j]);
		}
	}
	return;
}
