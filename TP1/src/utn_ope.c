/*
 * utn_ope.c
 *
 *  Created on: Mar 25, 2021
 *      Author: Daniel Gianetto
 */

#include "utn_ope.h"

float utn_suma(float x, float y, float* pResultado)
{
	*pResultado = x+y;

	return 0;
}

float utn_resta(float x, float y, float* pResultado)
{
	*pResultado = x-y;

	return 0;
}

float utn_multiplicacion(float x, float y, float* pResultado)
{
	*pResultado = x*y;

	return 0;
}

float utn_division(float x, float y, float* pResultado)
{
	*pResultado = x/y;

	return 0;
}

long long utn_factorial(float x, float* pResultado)
{
	int i;

	*pResultado = 1;

	if(x == 0)
	{
		*pResultado = 1;
	}
	else
	{
		for(i = 1; i <= x; i++)
		{
			*pResultado = *pResultado * i;
		}
	}

	return 0;
}

void utn_resolverMostrarTodo(float x, float y, int mostrarResultados, int flagA, int flagB)
{
	float sumar;
	float restar;
	float multiplicar;
	float dividir;
	float calcularFactX;
	float calcularFactY;

	int parteEntera;

	utn_suma(x,y,&sumar);
	utn_resta(x,y,&restar);
	utn_multiplicacion(x,y,&multiplicar);
	utn_division(x,y,&dividir);
	utn_factorial(x,&calcularFactX);
	utn_factorial(y,&calcularFactY);

	if(mostrarResultados != 0)
	{
		printf("\t\t----Resultados----\n\ta)El resultado de A+B es: %.2f."
				"\n\tb)El resultado de A-B es: %.2f."
				"\n\tc)El resultado de A*B es: %.2f.", sumar, restar, multiplicar);

		if(y == 0)
		{
			printf("\n\td)No se puede dividir por 0!.");
		}
		else
		{
			printf("\n\td)El resultado de A/B es: %.2f.", dividir);
		}

		if(x < 0)
		{
			printf("\n\te)El factorial de A es: No se puede calcular el factorial de un numero negativo.");
		}
		else
		{
			parteEntera = x;
			if(x - parteEntera)
			{
				printf("\n\te)El factorial de A es: No se puede calcular el factorial de un numero decimal.");
			}
			else
			{
				printf("\n\te)El factorial de A es: %.0f", calcularFactX);
			}
		}

		if(y < 0)
		{
			printf("\n\t  El factorial de B es: No se puede calcular el factorial de un numero negativo.\n");
		}
		else
		{
			parteEntera = y;
			if(y - parteEntera)
			{
				printf("\n\t  El factorial de B es: No se puede calcular el factorial de un numero decimal.\n");
			}
			else
			{
				printf("\n\t  El factorial de B es: %.0f\n", calcularFactY);
			}
		}

		//system("pause");
		//system("cls");

	}
	else
	{
		printf("\n\t\tTodo calculado!.");
	}
}
