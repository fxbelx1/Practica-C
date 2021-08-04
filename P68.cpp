#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int n,i,v[30],j,aux;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #68: Leer las calificaciones de n alumnos e imprimir las 3 calificaciones mas altas.  \n");
	printf("\n Ingrese la cantidad de calificaciones: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n Ingrese la calificacion: ");
		scanf("%d",&v[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(v[j]>v[i])
			{
				aux=v[i]; v[i]=v[j]; v[j]=aux;
			}
		}
	}
	for(i=1;i<=3;i++)
	{
		printf("\n \t MEJORES CALIFICACIONES: \n");
		printf("\t %d",v[i]);
	}
	getche();
}
