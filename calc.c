/****************************************************************************/
/*Fichero:calculadora.c																		 */
/*																									 */
/*Descripcion:Programa calculadora con las opciones aritmeticas; suma		 */
/*Resta, division, multiplicacion, potencia y factorial							 */
/****************************************************************************/

/****************************************************************************/
/*INCLUDE																						 */
/*zona de declaracion de las librerias													 */
/****************************************************************************/
#include <stdio.h>
#include	<stdlib.h>

/****************************************************************************/
/*DEFINE																							 */
/*zona de declaracion de constantes														 */
/****************************************************************************/

/****************************************************************************/
/*VAR GLOBAL																					 */
/*zona de declaracion de variables globales											 */
/****************************************************************************/

/****************************************************************************/
/*PROTOTIPO DE LA FUNCION																	 */
/*zona de declaracion de los prototipos de las funciones							 */
/****************************************************************************/
float Suma(float	flNum1, float	flNum2);
float Resta(float	flNum1, float	flNum2);
float Division(float flNum1, float flNum2);
float Multiplicacion(float	flNum1, float	flNum2);
float  Potencia(float flBas, float flExp);
int	Factorial(int flFact);


/****************************************************************************/
/*MAIN																							 */
/*Modulo principal																			 */
/****************************************************************************/

main()
{
	/*************************************************************************/
	/*VAR MAIN																					 */
	/*zona de declaracion de las variables locales a main()						 */
	/*************************************************************************/
	float	flNum1, flNum2,flRes,flFact,flBas,flExp;
	int	iOp,iOp2,iRes;
	char	cCar;


	/*************************************************************************/
	/*BEGIN MAIN																				 */
	/*************************************************************************/
do
{
		do
		{
			printf ("\n *******************************************************");
			printf ("\n              CALCULADORA   ARITMETICA ");
			printf ("\n *******************************************************");
			printf ("\n *******************************************************");
			printf ("\n |                    1.SUMA                           |");
			printf ("\n	|                    2.RESTA                          |");
			printf ("\n	|                    3.DIVISION                       |");
			printf ("\n	|                    4.MULTIPLICACION                 |");
			printf ("\n	|                    5.POTENCIA                       |");
			printf ("\n	|                    6.FACTORIAL                      |");
			printf ("\n *******************************************************\n\n\n");
			printf ("\n INTRODUCE la opcion a operar::");
			scanf ("%d", &iOp);
			if ((iOp<0) && (iOp>6))
			{
				printf ("\n ___________________________________________________________");
				printf ("\n Has introducido un numero que no pertenece a ninguna opcion");
				printf ("\n						   PRUEBA DE NUEVO!");
				printf ("\n -----------------------------------------------------------");
			}
		}while ((iOp<0) && (iOp>6));
		if (iOp<3)
		{
			printf ("\n Introduce el primer numero con el que quieres operar:");
			scanf ("%f", &flNum1);
			printf ("\n Ahora introduce el segundo numero con el que quieres operar:");
			scanf ("%f", &flNum2);
		}

		switch (iOp)
		{

			case 1:

					flRes=Suma(flNum1,flNum2);
					break;

			case 2:

					flRes=Resta(flNum1,flNum2);
					break;

			case 3:

               do
					{
						printf ("\n Introduce el numero a dividir:");
						scanf ("%f", &flNum1);
						printf ("\n Ahora introduce el dividendo:");
						scanf ("%f", &flNum2);
						if ((flNum1==0) || (flNum2==0))
						{
							printf ("\n___________________________________");
							printf ("\n    has introducido el numero 0");
							printf ("\n vuelve a introducir ambos de nuevo");
							printf ("\n-----------------------------------");
						}
					}while ((flNum1==0) || (flNum2==0));
					flRes=Division(flNum1, flNum2);
					break;

			case 4:

					do
					{
						printf ("\n Introduce el primer numero a multiplicar:");
						scanf ("%f", &flNum1);
						printf ("\n Ahora introduce el segundo numero con el que multiplicar:");
						scanf ("%f", &flNum2);
						if ((flNum1==0) || (flNum2==0))
						{
							printf ("\n___________________________________");
							printf ("\n    has introducido el numero 0");
							printf ("\n vuelve a introducir ambos de nuevo");
							printf ("\n-----------------------------------");
						}
					}while ((flNum1==0) || (flNum2==0));
					flRes=Multiplicacion(flNum1, flNum2);
					break;

			case 5:
					do
					{
						printf ("\n Introduce la base del numero:");
						scanf ("%f", &flBas);
						if(flBas==0)
						{
							printf ("\n___________________________________");
							printf ("\n Una base 0, dara como resultado 0");
							printf ("\n    vuelve a introducir la base!");
							printf ("\n-----------------------------------");
						}
					}while(flBas==0);
					printf ("\n Introduce el exponente del numero:");
					scanf ("%f", &flExp);
					flRes=Potencia(flBas, flExp);
					printf ("\n\t\t\t la opcion elegida era: %d", iOp);
					printf ("\n\t\t\t la base introducida era: %f", flBas);
					printf ("\n\n\t\t el exponente introducido era: %f", flExp);
					printf ("\n\t\t\t y El resultado de la operacion es %f", flRes);
					printf ("\n\t\t\t ------------------------------------------");
					break;

			case 6:

						printf ("\n Introduce el numero del cual quieres averiguar el factorial:");
						scanf ("%f", &flFact);
						if (flFact<0)
						{
							printf ("\n solo numeros enteros positivos!");
							printf ("\n         PRUEBA DE NUEVO!");
						}

					flRes=Factorial(flFact);
					printf ("\n\t\t\t el Numero introducido era: %f", flFact);
					printf ("\n\t\t\t y el resultado es: %f", flRes);
					break;

			default: ;
	  }

		if (iOp<5)
		{
			printf ("\n\t\t\t la opcion elegida era: %d", iOp);
			printf ("\n\t\t\t los operandos introducidos eran %f y %f", flNum1, flNum2);
			printf ("\n\t\t\t y El resultado de la operacion es %f", flRes);
			printf ("\n\t\t\t -------------------------------------");
		}
		printf ("\n\n\n FIN DE PROGRAMA. ");
		printf ("\n\n\n desea realizar otra operacion (s/n)?");
		printf ("\n        1.SI");
		printf ("\n        2.NO\n");
		scanf ("%d", &iOp2);

		}while(iOp2==1);




	/*************************************************************************/
	/*END MAIN																					 */
	/*************************************************************************/
}


/****************************************************************************/
/*FUNCIONES																					 	 */
/*zona de definicion de la funciones													 */
/****************************************************************************/

/****************************************************************************/
/*NOMBRE DE FUNCION:Suma																	 */
/*DESCRIPCION:Realiza la suma de dos numeros reales								 */
/*PARAMETROS:float's--flNum1, flNum2 ((operandos))									 */
/*RETORNO:flRes (resultado)																 */
/****************************************************************************/
float Suma(float	flNum1, float	flNum2)
{
	float flR=0;
	flR=flNum1+flNum2;
	return flR;
}


/****************************************************************************/
/*NOMBRE DE FUNCION:Resta																	 */
/*DESCRIPCION:Realiza la resta de dos numeros reales								 */
/*PARAMETROS:float's--flNum1, flNum2 ((operandos))									 */
/*RETORNO:flRes (resultado)																 */
/****************************************************************************/
float Resta(float	flNum1, float	flNum2)
{
	float flR=0;
	flR=flNum1-flNum2;
	return flR;
}

/****************************************************************************/
/*NOMBRE DE FUNCION:division																 */
/*DESCRIPCION:Realiza la division de dos numeros reales							 */
/*PARAMETROS:float's--flNum1, flNum2 ((operandos))									 */
/*RETORNO:flRes (resultado)																 */
/****************************************************************************/
float Division(float flNum1, float flNum2)
{
	float flR=0;
	flR=flNum1/flNum2;
   return flR;
}

/****************************************************************************/
/*NOMBRE DE FUNCION:Multiplicacion														 */
/*DESCRIPCION:Realiza la multipliacion de dos numeros	reales					 */
/*PARAMETROS:float's--flNum1, flNum2 ((operandos))									 */
/*RETORNO:flRes (resultado)																 */
/****************************************************************************/
float Multiplicacion(float	flNum1, float	flNum2)
{
	float flR=0;
	flR=flNum1*flNum2;
	return flR;
}


/****************************************************************************/
/*NOMBRE DE FUNCION:Potencia																 */
/*DESCRIPCION:Programa que calcula la potencia de un numero						 */
/*PARAMETROS:flBas-->base, flExp-->exponente del numero							 */
/*RETORNO:flR-->resultado																	 */
/****************************************************************************/
float Potencia(float flBas,float flExp)
{
	float flR=0;
	int iCont;
	if (flExp<0)
	{
		flExp=flExp*-1;
		for (iCont=1; iCont<flExp; iCont++)
		{
			flR=flR+flBas*flBas;
		}
		flR=1/flR;
		return flR;
	}else{
		for (iCont=1; iCont<flExp; iCont++)
			{
				flR=flR+flBas*flBas;
			}
		return flR;
	}
}

/****************************************************************************/
/*NOMBRE DE FUNCION:Factorial																 */
/*DESCRIPCION:calcula el factorial de un numero int, positivo					 */
/*PARAMETROS:iFact-->numero a calcular el factorial								 */
/*RETORNO:iRes=resultado																	 */
/****************************************************************************/
int  Factorial(int flFact)
{
	long	flRes=0;
	if (flFact==1)
	{
		return 1;
	}
	flRes=flFact*Factorial(flFact-1);
	return flRes;
}
