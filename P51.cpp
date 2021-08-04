#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
	int na,nr,op,nm;
	float suma,prom,ca,sr,pr;
	printf("Elaborado por: Priscila Fabela    Matricula: 1810013 \n");
	printf("Programa #51: Encuesta de calificaciones. \n");
	suma=0; na=0; nr=0; nm=0; sr=0;
	printf("\n Desea saber su promedio? \n Si=1   No=0 \n"); 
	scanf("%d",&op);
	while(op==1)
	{
		printf("\n Desea ingresar una calificacion? \n Si=1   No=0 \n");
		scanf("%d",&op);
		while(op==1)
		{
			printf("Ingrese la calificacion: ");
			scanf("%f",&ca);
			suma=suma+ca;
			nm++; 
			printf("\n Desea ingresar otra calificacion? \n Si=1   No=0 \n");
			scanf("%d",&op);
		}
		prom=suma/nm;
		suma=0;
		nm=0;
		if(prom>70)
		{
			na++;
		}
		else
		{
			nr++;
			sr=sr+prom;
		}
		printf("\n \t PROMEDIO=%f \n",prom);
		printf("\n Desea saber otro promedio? \n Si=1   No=0 \n"); 
		scanf("%d",&op);
	}
	pr=sr/nr;
	printf("\n \t TOTAL DE ALUMNOS APROBADOS=%d \n \t PROMEDIO ALUMNOS REPROBADOS=%f",na,pr);
	
getche();
}
