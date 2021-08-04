#include<stdio.h>
#include<math.h>
#include<conio.h>

void leemat();
void impmat();
void sumaad();
int m[30][30];
int suma,i,j,fila,col;

main()
{
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #79: Sumar e imprimir los elementos que estan por encima de la diagonal principal de una matriz. \n");
	leemat();
	printf("\n \n MATRIZ: ");
	impmat();
	sumaad();
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

void sumaad()
{
	suma=0;
	for(i=1;i<fila;i++)
	{
		for(j=1+i;j<=col;j++)
		{
			suma=suma+m[i][j];
		}
	}
	printf("\n \n \t SUMA=%d",suma);

}
