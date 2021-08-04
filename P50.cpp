#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int cont, op;
	float num, suma, prom;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #50: Elabora un programa que lea numeros indefinidamente, calcule su suma y promedio.\n");
	cont=0; suma=0;
	printf("\n Desea ingresar un numero? \n Si=1   No=0 \n"); 
	scanf("%d",&op);
	while(op==1)
	{
		printf("\n Ingrese el valor del numero: ");
		scanf("%f",&num);
		suma=suma+num; cont++;
		printf("\n Desea ingresar otro numero? \n Si=1   No=0 \n");
		scanf("%d",&op);
	}
	if(cont>0)
	{
		prom=suma/cont;
		printf("\n \t SUMA=%.3f PROMEDIO=%.3f",suma,prom);
	}
	getche();
}

