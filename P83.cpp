#include<stdio.h>
#include<math.h>
#include<conio.h>

void leemat1();
void leemat2();
void impmat1();
void impmat2();
void sumamat();
void impmatr();
int m[30][30],n[30][30],r[30][30];
int suma,i,j,fila,col;

main()
{
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #83: Restar 2 matrices e imprimir la matriz resultante. \n");
	leemat1();
	leemat2();
	printf("\n \n MATRIZ #1: ");
	impmat1();
	printf("\n \n MATRIZ #2: ");
	impmat2();
	sumamat();
	printf("\n \n MATRIZ RESULTANTE: ");
	impmatr();
	getche();
}

void leemat1()
{
	do
	{
		printf("Ingrese la cantidad de filas (matriz #1): ");
		scanf("%d",&fila);
		printf("Ingrese la cantidad de col (matriz #1): ");
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

void leemat2()
{
	do
	{
		printf("Ingrese la cantidad de filas (matriz #2): ");
		scanf("%d",&fila);
		printf("Ingrese la cantidad de col (matriz #2): ");
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
			scanf("%d",&n[i][j]);
		}
	}
return;	
}

void impmat1()
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

void impmat2()
{
	printf("\n");
	for(i=1;i<=fila;i++)
	{
		printf("\n");
		for(j=1;j<=col;j++)
		{
			printf("%5d",n[i][j]);
		}
	}
	return;
}

void sumamat()
{
	for(i=1;i<=fila;i++)
	{
		for(j=1;j<=col;j++)
		{
			r[i][j]=m[i][j]-n[i][j];
		}	
	}
}

void impmatr()
{
	printf("\n");
	for(i=1;i<=fila;i++)
	{
		printf("\n");
		for(j=1;j<=col;j++)
		{
			printf("%5d",r[i][j]);	
		}
	}
	return;
}
