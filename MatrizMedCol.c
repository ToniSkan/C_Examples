/****************************************************************************/
/*Fichero:7_29																					 */
/*																									 */
/*Descripcion:Programa que realiza la carga de datos de una matriz de  		 */
/*4 filas y 5 columnas con valores numericos y utiliza una funcion para 	 */
/*obtener la media aritmetica de una determinada columna							 */
/****************************************************************************/

/****************************************************************************/
/*INCLUDE																						 */
/*zona de declaracion de las librerias													 */
/****************************************************************************/
#include <stdio.h>

/****************************************************************************/
/*DEFINE																							 */
/*zona de declaracion de constantes														 */
/****************************************************************************/
#define FILAS 4
#define COLS 5

/****************************************************************************/
/*VAR GLOBAL																					 */
/*zona de declaracion de variables globales											 */
/****************************************************************************/


/****************************************************************************/
/*PROTOTIPO DE LA FUNCION																	 */
/*zona de declaracion de los prototipos de las funciones							 */
/****************************************************************************/
float Calculo(float *flPp, int iN);


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
	float	flVector[FILAS][COLS];
	float	flMed;
	float *flPp=flVector;
	int	iN;
	int	iI, iI2;

	/*************************************************************************/
	/*BEGIN MAIN																				 */
	/*************************************************************************/
	printf ("\n_______________________________________________________________");
	printf ("\n| PROGRAMA QUE REALIZA LA CARGA DE DATOS DE UNA MATRIZ DE 4   |");
	printf ("\n|  FILAS Y 5 COLUMNAS CON VALORES NUMERICOS Y UTILIZA UNA     |");
	printf ("\n| FUNCION PARA CALCULAR LA MEDIA DE UNA DETERMINADA COLUMNA   |");
	printf ("\n|_____________________________________________________________|");
	
	for (iI=0; iI<FILAS; iI++)
	{
		for (iI2=0; iI2<COLS; iI2++)
		{
			printf ("\n introduce un elemento para la fila, %d. de la columa %d:", iI+1, iI2+1);
			scanf ("%f", &flVector[iI][iI2]);

		}
	}
	printf ("\n CARGA DEL ARRAY COMPLEATADA!");
	printf ("\n introduce ahora la columa de la cual quieres obtener la media");
	do
	{
		scanf ("%d", &iN);
		if (iN>COLS-1)
		{
		printf ("\n __________________________________________");
		printf ("\n calamar que tas pasado! . prueba otra vez");
		printf ("\n------------------------------------------\n");
		}
	}while(iN>COLS-1);
		flMed=Calculo(flPp, iN-1);
		printf ("\n EL RESULTADO DE LA MEDIA DE LA COLUMA %d ES: %f", iN, flMed);



	/*************************************************************************/
	/*END MAIN																					 */
	/*************************************************************************/
}

/****************************************************************************/
/*FUNCIONES																					 	 */
/*zona de definicion de la funciones													 */
/****************************************************************************/

/****************************************************************************/
/*NOMBRE DE FUNCION:Calculo()   															 */
/*DESCRIPCION:calcula la media de una columna de un array bidimensional		 */
/*PARAMETROS:float flPp->puntero que apunta a array, iN-->columna				 */
/*RETORNO:float->Resultado de la suma->flResult. 									 */
/****************************************************************************/

float	Calculo(float *flPp,int N)
{
	int	iI;
	float flResult=0;
	for (iI=0; iI<FILAS; iI++)
	{
		flResult=flResult+*(flPp+(iI*COLS+N));
	}
	flResult=flResult/FILAS;
	return flResult;
}


