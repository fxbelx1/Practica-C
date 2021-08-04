#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int op ;
	float num;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #52: Programa que lea numeros indefinidamente, determine e imprima el valor de estos numeros. \n");
	printf("\n Desea ingresar un numero? \n Si=1   No=0 \n"); 
	scanf("%d",&op);
	while(op==1)
	{
		printf("\n Ingrese el numero: \n");
		scanf("%f",&num);
		printf("\n \t NUMERO=%f",num);
		printf("\n Desea ingresar otro numero? \n Si=1   No=0 \n"); 
		scanf("%d",&op);
	}
	getche();
}
