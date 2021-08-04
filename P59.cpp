#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int i,n,vector[30],mayor,posicion;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #59: Leer n numeros e imprimir el mayor y cual es su posicion. \n");
	printf("\n Ingrese la cantidad de elementos del vector: ");
	scanf("%d",&n);
	mayor=0;
	posicion=0;
	for(i=1;i<=n;i++)
	{
		printf("\t Ingrese el valor del elemento %d: ",i);
		scanf("%d",&vector[i]);
		if(vector[i]>=mayor)
		{
			mayor=vector[i];
			posicion=i;
		}
	}
	printf("\n \n \t MAYOR=%d  POSICION=%d",mayor,posicion);
	getche();
}
