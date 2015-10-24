/*******************************************************************/
/*fichero: ema21_5.c																 */
/*programa que crea matriz tabla unidimensional de 10 elmenetos	 */
/*de tipo entero y de nombre numeros. carga la tabla con valores	 */
/*aleatorios. y muestra en pantalla cada elemento junto con su 	 */
/*cubo y su cuadrado																 */
/*******************************************************************/

/*******************************************************************/
/*INCLUDE																			 */
/*******************************************************************/
#include <stdio.h>

/*******************************************************************/
/*DEFINE																				 */
/*******************************************************************/


/*******************************************************************/
/*MAIN																				 */
/*******************************************************************/
main()
{
	/****************************************************************/
	/*VAR																				 */
	/****************************************************************/
	int	iNumeros[10];
	int	iI,iNum,iCuad,iCub;
	/****************************************************************/
	/*BEGIN 																			 */
	/****************************************************************/
   printf("\n************************************************************");
	printf("\n| CARGA LA TABLA CON VALORES ALEATORIOS Y MUESTRA EN        |");
	printf("\n|   PANTALLA CADA ELEMENTO JUNTO A SU CUBO Y SU CUADRADO    |");
	printf("\n*************************************************************");
	for (iI=0; iI<10; iI++)
	{
		printf("\n___________________________________________________________");
		printf ("\n introduzca un numero para el elmento %d de la tabla::", iI);
		scanf ("%d", &iNum);
		iNumeros[iI]=iNum;
		iCuad=iNumeros[iI]*iNumeros[iI];
		iCub=iNumeros[iI]*iNumeros[iI]*iNumeros[iI];
		printf("\n del elemento %d: .que contiene el numero %d|",iI,iNumeros[iI]);
		printf("\n--------------------------------------------");
		printf("\n          su cuadrado es:%d", iCuad);
		printf("\n          su cubo es    :%d", iCub);
		printf("\n--------------------------------------------");
	}

	/****************************************************************/
	/*END	 																			 */
	/****************************************************************/
}

											
