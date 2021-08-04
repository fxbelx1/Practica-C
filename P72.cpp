#include<stdio.h>
#include<math.h>
#include<conio.h>

void leemat();
void impmat();
void diag();
int m[30][30],i,j,fila,col;
float suma,prom;

main()
{
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #72: Leer una matriz cuadradada, imprimirla e imprimir la suma de los elementos de la diagonal principal. \n");
	leemat();
	printf("\n \n MATRIZ: ");
	impmat();
	diag();
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

void diag()
{
	suma=0;
	for(i=1;i<=fila;i++)
	{
		suma=suma+m[i][i];
	}
	prom=suma/fila;
	printf("\n \t PROMEDIO=%f",prom);
return;
}
