/*****************************************************************
* Programa: TP1 Laboratorio 1-
*
* Objetivo:
    Ingresar 2 numeros A y B, calcular todas las operaciones e
    informar los resultados seleccionando la opción correspondiente
    desde el menu.
        numA
        numB
        opcion
*
*   Version: 1.0 del 16 de Abril del 2021.
*   Autor: Daniel Gianetto
*****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "utn_ope.h"
#include "utn_lib.h"

int main(void)
{
	float numA;
	float numB;
	int opcion;
	int changeA;
	int changeB;
	int mostrar;

	mostrar = 0;
	changeA = 0;
	changeB = 0;

	do
	{
		utn_menu(&opcion, numA, numB, changeA, changeB, 1,5);

		switch(opcion)
		{
			case 1:
				utn_getFloat(&numA, "\nIngrese el 1er operando: ");
				changeA = 1;
				break;
			case 2:
				utn_getFloat(&numB, "\nIngrese el 2do operando: ");
				changeB = 1;
				break;
			case 3:
				utn_resolverMostrarTodo(numA,numB,mostrar);
				mostrar = 1;
				break;
			case 4:
				if(mostrar == 0)
				{
					printf("\nResuelva las operaciones para poder ver los resultados!");
				}
				else
				{
					utn_resolverMostrarTodo(numA,numB,mostrar);
					mostrar = 0;
					changeA = 0;
					changeB = 0;
				}
				break;
		}
	}while(opcion != 5);

	return EXIT_SUCCESS;
}
