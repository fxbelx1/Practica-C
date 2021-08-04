#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int n;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #53: Serie ullam. \n");
	do
	{
		printf("\n Ingrese el valor de inicio de la serie: \n ");
		scanf("%d",&n);
		printf("\n SERIE=%d",n);
		if(n<=1)
		{
			printf("\n El valor de inicio no es valido. Vuelve a capturar. \n");
		}
	}
	while(n<=1);
	do
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=(n*3)+1;
		}
		printf("\n       %d",n);
	}
	while(n!=1);
	getche();
}
