#include<stdio.h>
#include<math.h>
#include<conio.h>

void leemat();
void impmat();
void sumah();
void sumav();
void sumavh();
int m[30][30];
int suma,i,j,fila,col,sumax;

main()
{
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #77: Sumar e imprimir los elementos de la periferia de la matriz. \n");
	leemat();
	printf("\n \n MATRIZ: ");
	impmat();
	sumah();
	sumav();
	sumavh();
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

void sumah()
{
	suma=0;
	for(i=1;i<=fila;i++)
	{
		if(i==1||i==fila)
		{
			for(j=1;j<=col;j++)
			{
				suma=suma+m[i][j];
			}
		}
	}
	return;
}

void sumav()
{
	sumax=0;
	for(i=1;i<=fila;i++)
	{
		if(i>1&&i<fila)
		{
			for(j=1;j<=col;j++)
			{
				if(j==1||j==col)
				{
					sumax=sumax+m[i][j];
				}
			}
		}
	}
}

void sumavh()
{
	suma=suma+sumax;
	printf("\n \n \t SUMA=%d",suma);
}
