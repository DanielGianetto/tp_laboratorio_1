/*
 ============================================================================
 Name        : TP1.c
 Author      : Daniel Gianetto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_ope.h"

int main(void)
{
	float numA;
	float numB;
	float resultado;
	int opcion;

	do
	{
		printf("1-Ingresar el operando A."
				"\n2-Ingresar el operando B."
				"\n3-Calcular todas las operaciones."
				"\n4-Informar resultados."
				"\n5-Salir.\n");
		scanf("%d",&opcion);

		while(opcion <= 0 || opcion > 5)
		{
			printf("Opcion invalida, intente de nuevo: ");
			scanf("%d",&opcion);
		}

		switch(opcion)
		{
			case 1:
				printf("Ingrese el operando A: ");
				scanf("%f",&numA);
				break;
			case 2:
				printf("Ingrese el operando B: ");
				scanf("%f",&numB);
				break;
			case 3:

				break;
			case 4:
				break;
		}

	}while(opcion != 5);




	return EXIT_SUCCESS;
}
