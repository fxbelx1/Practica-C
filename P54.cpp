#include<stdio.h>
#include<math.h>
#include<conio.h>
	
main()
{
	int op,a,p,np,i,num;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #54: Programa que lea numeros indefinidamente, determine e imprima cuales y cuantos son numeros primos y cuales y cuantos no lo son. \n");
	a=0; p=0; np=0;
	do
	{
		printf("\n Ingrese el numero a evaluar: ");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				a++;
			}
		}
		if(a==2)
		{
			p++;
			printf("\n \t NUMERO PRIMO=%d",num);
		}
		else
		{
			np++;
			printf("\n \t NO PRIMO=%d \n ",num);
		}
		a=0;
		printf("\n Desea evaluar otro numero? \n Si=1  No=0 \n ");
		scanf("%d",&op);
	}
	while(op==1);
	printf("\n \t NUMEROS PRIMOS=%d      NUMEROS NO PRIMOS=%d",p,np);
	getche();
}
