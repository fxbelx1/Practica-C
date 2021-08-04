#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int n,i,a,vector[30],c,nc;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #60: Ingresar un numero cualquiera e imprimir si ya se habia capturado en el vector hecho anteriormente. \n");
	printf("\n Ingrese la cantidad de elementos del vector: ");
	scanf("%d",&n);
	c=0;
	nc=0;
	for(i=1;i<=n;i++)
	{
		printf("\t Ingrese el valor del elemento %d: ",i);
		scanf("%d",&vector[i]);
	}
	printf("\n \n Ingrese el numero que desea evaluar: ");
	scanf("%d",&a);
	for(i=1;i<=n;i++)
	{
		if(a==vector[i])
		{
			c++;
		}
		else
		{
			nc++;
		}	
	}
	if(nc==n)
	{
		printf("\n \n \t EL NUMERO NO SE HA CAPTURADO");
	}
	else
	{
		printf("\n \n \t EL NUMERO SE HA CAPTURADO %d VECES",c);
	}
getche();
}
