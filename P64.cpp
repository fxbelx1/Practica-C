#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int n,i,v[30];
	float suma, prom;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #64:Leer n numeros, calcular el promedio e imprimir algunos de sus datos.  \n");
	printf("\n Ingrese la cantidad de elementos del vector: ");
	scanf("%d",&n);
	suma=0;
	for(i=1;i<=n;i++)
	{
		printf("\t Ingrese el valor del elemento %d: ",i);
		scanf("%d",&v[i]);
		suma=suma+v[i];
	}
	prom=suma/n;
	for(i=1;i<=n;i++)
	{
		if(v[i]>prom)
		{
			if(v[i]%2==0)
			{
				printf("\n NUMERO PAR MAYOR QUE EL PROMEDIO=%d",v[i]);
			}
			else
			{
			printf("\n NUMERO NO PAR MAYOR QUE EL PROMEDIO=%d",v[i]);
			}
		}
		else
		{
			if(v[i]%2==0)
			{
				printf("\n NUMERO PAR MENOR QUE EL PROMEDIO=%d",v[i]);
			}
			else
			{
			printf("\n NUMERO NO PAR MENOR QUE EL PROMEDIO=%d",v[i]);
			}
		}
		
	}
}
