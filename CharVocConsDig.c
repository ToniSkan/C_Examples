/*******************************************************************/
/*fichero: 10_28.c															 	 */
/*programa que reserva memoria suficiente para almacenar de 200    */
/*a 400 chars. recoja una cadena, y contabilice el numero de    	 */
/*VOCALES, CONSONANTES, DIGITOS, signos de puntuacion y espacios	 */
/*y muestre el resultado en pantalla.								 		 */
/*******************************************************************/

/*******************************************************************/
/*INCLUDE-librerias																 */
/*******************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


/*******************************************************************/
/*DEFINE-defines constantes													 */
/*******************************************************************/
#define N 400

/*******************************************************************/
/*MAIN																				 */
/*******************************************************************/
void main(void)
{
	/****************************************************************/
	/*VAR	-defines variables													 */
	/****************************************************************/

	char	scCadena[N];
	int	iI,iL1;
	char	*pP=scCadena;
	int	iV, iC, iD, iS, iE;

	/****************************************************************/
	/*BEGIN -algoritmo															 */
	/****************************************************************/
	printf ("\n****************************************************************");
	printf ("\n|   programa que resrva espacio en memoria para 400 chars      |");
	printf ("\n|   recoje una cadena de caracteres y determina el numero      |");
	printf ("\n|   de vocales, consonantes, digitos, espacios y signos        |");
	printf ("\n****************************************************************");
	pP=(char*) malloc(400);
	if(!pP)
	{
		printf ("\n imposible reservar memoria!!.\n");
		exit(1);
	}

	for (iI=0; iI<N; iI++)
	{
		scCadena[iI]=('\0');
	}
	do
	{
		printf ("\n Introduce una cadena de caracteres de como maximo 400 chars");
		gets(scCadena);
		iL1=strlen(scCadena);
		if (iL1>N)
		{
			printf ("\n --------------------------------------------");
			printf ("\n Has introducido una cadena demasiado larga!!");
			printf ("\n              prueba otra vez");
			printf ("\n --------------------------------------------");
		}

	 }while (iL1>N);
	 iV=iC=iD=iS=iE=0;
	 pP=scCadena;
	 for (iI=0; iI<iL1; iI++)
	 {
		scCadena[iI]=tolower(scCadena[iI]);
			if (isdigit(*pP))
			{
				iD++;
			}
			if (((*pP>=33) && (*pP<=64)) || ((*pP>=91) && (*pP<=96)) || ((*pP>=123) && (*pP<=126)))
			{
				iS++;
			}
			if (isalpha(*pP))
				{
					iC++;
					if ((*pP==97) || (*pP==101) || (*pP==105) || (*pP==111) || (*pP==117))
						{
							iV++;
							iC--;
						}
				 }
			if (*pP==' ')
			{
				iE++;
			}

			pP++;
	 }

	printf ("\n ---------------------------------------------------------------");
	printf ("\n Habia un total de %d LETRAS VOCALES", iV);
	printf ("\n Habia un total de %d LETRAS CONSONANTES", iC);
	printf ("\n Habia un total de %d DIGITOS", iD);
	printf ("\n Habia un total de %d ESPACIOS EN BLANCO", iE);
	printf ("\n Habia un total de %d SIGNOS DE PUNTUACION", iS);
	printf ("\n ---------------------------------------------------------------\n \n \n");


	printf ("\n****************************************************************");
	printf ("\n|                  FIN       DE       PROGRAMA                  |");
	printf ("\n****************************************************************");


	/****************************************************************/
	/*END	 -final																	 */
	/****************************************************************/
}



