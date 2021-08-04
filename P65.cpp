#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int n,i,v[30];
	float suma, prom,sumatoria,desv;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #65: Imprimir la desviacion estandar de n numeros.  \n");
	printf("\n Ingrese la cantidad de elementos del vector: ");
	scanf("%d",&n);
	suma=0;
	for(i=0;i<n;i++)
	{
		printf("\t Ingrese el valor del elemento %d: ",i);
		scanf("%d",&v[i]);
		suma=suma+v[i];
	}
	prom=suma/n;
	sumatoria=0;
	for(i=0;i<n-1;i++)
	{
		sumatoria=sumatoria+v[i];
	}
	for(i=0;i<n;i++)
	{
		desv=sqrt((sumatoria*pow((v[i]-prom),2))/(n-1));
		printf("\n \n \t DESVIACION ESTANDAR DE LA POSICION %d ",i);
		printf("\n \t %f",desv);
	}
}
