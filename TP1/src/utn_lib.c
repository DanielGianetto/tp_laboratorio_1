/*
 * utn_lib.c
 *
 *  Created on: Mar 25, 2021
 *      Author: Daniel Gianetto
 */

#include "utn_lib.h"

float utn_getFloat(float* pNum, char* pTexto)
{
	int retorno;
	retorno = -1;

	if(pNum != NULL && pTexto != NULL)
	{
		printf("%s",pTexto);
		__fpurge(stdin);
		scanf("%f",pNum);
		retorno = 0;
	}

	//cls

	return retorno;
}

int utn_getInt(int* pNum, char* pTexto, char* pError, int minimo, int maximo)
{
	int retorno;
	retorno = -1;

	if(pNum != NULL && pTexto > 0 && pError != NULL && minimo > 0 && maximo > 0)
	{
		do
		{
			printf("%s",pTexto);
			__fpurge(stdin);
			scanf("%d",pNum);

			if(*pNum>=minimo && *pNum<=maximo)
			{
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",pError);
			}
		}while(retorno == -1);
	}

	return retorno;
}

int utn_menu(int* pVariableOpcion, float numA, float numB, int changeA, int changeB, int minimo, int maximo)
{
	int retorno;
	retorno = 1;

	if(pVariableOpcion != NULL && minimo > 0 && maximo > 0)
	{
		printf("\n\t\t---CALCULADORA---");

		if(changeA != 1)
		{
			printf("\n\t1)Ingresar 1er operando (A=x).");
		}
		else
		{
			printf("\n\t1)Ingresar 1er operando (A=%.2f).", numA);
		}

		if(changeB != 1)
		{
			printf("\n\t2)Ingresar 2do operando (B=y).");
		}
		else
		{
			printf("\n\t2)Ingresar 2do operando (B=%.2f).", numB);
		}

		printf("\n\t3)Calcular todas las operaciones.\n\t4)Informar resultados.\n\t5)Salir.");

		utn_getInt(pVariableOpcion, "\t\nSeleccione una opcion: ","\t\nOpcion invalida, intente de nuevo: ",minimo,maximo);
		retorno = 0;
	}

	return retorno;
}
