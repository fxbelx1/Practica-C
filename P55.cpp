#include<stdio.h>
#include<math.h>
#include<conio.h>
	
main()
{
	int i,num,suma,p,np,op;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #55: Programa que lea numeros indefinidamente, determine e imprima cuales y cuantos son numeros perfectos y cuales y cuantos no lo son. \n");
	suma=0; p=0; np=0;
	do
	{
		printf("\n Ingrese el numero a evaluar (A partir del numero 2): ");
		scanf("%d",&num);
		for(i=1;i<num;i++)
		{
			if(num%i==0)
			{
				suma=suma+i;
			}
		}
		if(suma==num)
		{
			p++;
			printf("\n \t NUMERO PERFECTO");
		}
		else
		{
			np++;
			printf("\n \t NO ES UN NUMERO PERFECTO");
		}
		suma=0;
		printf("\n Desea evaluar otro numero? \n Si=1   No=0 \n : ");
		scanf("%d",&op);
	}
	while(op==1);
	printf("NUMEROS PERFECTOS=%d  NO PERFECTOS=%d",p,np);
	getche();
}
