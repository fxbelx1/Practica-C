#include<stdio.h>
#include<math.h>
#include<conio.h>

void leemat();
void impmat();
void central();
int m[30][30];
int suma,i,j,fila,col;

main()
{
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #81: Sumar e imprimir los elementos de la fila y columna centrales. \n");
	leemat();
	printf("\n \n MATRIZ: ");
	impmat();
	central();
	printf("\n \n \t SUMA=%d",suma);
	getche();
}

void leemat()
{
	do
	{
		printf("\n Ingrese la cantidad de filas: ");
		scanf("%d",&fila);
		printf("\n Ingrese la cantidad de col: ");
		scanf("%d",&col);
		if(fila!=col)
		{
			printf("LAS FILAS Y COLUMNAS DEBEN SER IGUALES");
		}
		if(fila%2==0)
		{
			printf("DEBEN SER NUMEROS IMPARES");
		}	
	}
	while(fila!=col||fila%2==0);
	for(i=1;i<=fila;i++)
	{
		for(j=1;j<=col;j++)
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
	for(i=1;i<=fila;i++)
	{
		printf("\n");
		for(j=1;j<=col;j++)
		{
			printf("%5d",m[i][j]);
		}
	}
	return;
}

void central()
{
	suma=0;
	for(i=1;i<fila;i++)
	{
		for(j=2;j<=i+1;j++)
		{
			if(i!=j)
			{
				suma=suma+m[i][j]+m[j][i];
			}
			else
			{
				suma=suma+m[i][j];
			}
		}
	}
	return;
}
