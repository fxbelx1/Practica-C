#include<stdio.h>
#include<math.h>
#include<conio.h>

void leemat();
void impmat();
void diagp();
void diags();
int m[30][30],i,j,fila,col,v[30];

main()
{
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #74: Acomodar las diagonales de una matriz en un vector. \n");
	leemat();
	printf("\n \n MATRIZ: ");
	impmat();
	diagp();
	diags();
	getche();
}

void leemat()
{
	do
	{
		printf("Ingrese la cantidad de filas: ");
		scanf("%d",&fila);
		printf("Ingrese la cantidad de col: ");
		scanf("%d",&col);
		if(fila!=col)
		{
			printf("LAS FILAS Y COLUMNAS DEBEN SER IGUALES");
		}	
	}
	while(fila!=col);
	for(i=0;i<fila;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Ingrese el valor de la casilla %d, %d: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
return;	
}

void impmat()
{
	printf("\n");
	for(i=0;i<fila;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf("%5d",m[i][j]);
		}
	}
	return;
}

void diagp()
{
	for(i=0;i<fila;i++)
	{
		v[i]=m[i][i];
	}
	return;
}

void diags()
{
	for(i=0;i<fila;i++)
	{
		v[fila+i]=m[i][fila-i-1];
	}
	return;
}

