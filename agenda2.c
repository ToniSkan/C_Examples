/****************************************************************************/
/*Fichero:agenda de prefijos de cada provincia										 */
/*																									 */
/*Descripcion:Programa que rellena un array de punteros bidimensional		 */
/*y da la opcion de realizar busqueda por provincia o por prefijo				 */
/****************************************************************************/

/****************************************************************************/
/*INCLUDE																						 */
/*zona de declaracion de las librerias													 */
/****************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/****************************************************************************/
/*DEFINE																							 */
/*zona de declaracion de constantes														 */
/****************************************************************************/
#define F 3
#define K 2
/****************************************************************************/
/*VAR GLOBAL																					 */
/*zona de declaracion de variables globales											 */
/****************************************************************************/

/****************************************************************************/
/*PROTOTIPO DE LA FUNCION																	 */
/*zona de declaracion de los prototipos de las funciones							 */
/****************************************************************************/
void rellenar(char *pcTabla[F][K]);
void pprovincia(char *pcTabla[F][K]);
void pprefijo(char *pcTabla[F][K]);


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
	 char	*pcTabla[F][K];
	 int	iOp;
	 int	iF,iK;
	/*************************************************************************/
	/*BEGIN MAIN																				 */
	/*************************************************************************/
	for (iF=0; iF<5; iF++)	//reservo memoria par las provincias//
	{
			pcTabla[iF][0]=(char *) malloc (15);
			if(!pcTabla[iF][0])
			{
				printf ("\n memoria insuficiente!");
				exit(0);
			}
			pcTabla[iF][1]=(char *) malloc (4);
			if(!pcTabla[iF][0])
			{
				printf ("\n memoria insuficiente!");
				exit(0);
			}
	}
	do
	{
		do
		{
			printf ("\n\t\t *********************************");
			printf ("\n\t\t |  AGENDA PREFIJOS POR PROVINCIA|");
			printf ("\n\t\t *********************************");
			printf ("\n\t\t *********************************\n\n");
         printf ("\n\t\t  ___________________________");
			printf ("\n\t\t |elige una de las 3 opciones| ");
			printf ("\n\t\t |---------------------------|");
			printf ("\n\t\t |1.RELLENAR TABLA           |");
			printf ("\n\t\t |2.BUSQUEDA POR PROVINCIA   |");
			printf ("\n\t\t |3.BUSQUEDA POR PREFIJO     |");
			printf ("\n\t\t |---------------------------|\n\t\t:");
			scanf ("%d", &iOp);
		}while((iOp>3) || (iOp<0));
		switch (iOp)
		{
			case 1:
				rellenar(pcTabla);
				break;

			case 2:
				pprovincia(pcTabla);
				break;

			case 3:
				pprefijo(pcTabla);
				break;

		}
	}while (iOp<=3);



	/*************************************************************************/
	/*END MAIN																					 */
	/*************************************************************************/

	}


/****************************************************************************/
/*FUNCIONES																					 	 */
/*zona de definicion de la funciones													 */
/****************************************************************************/

/****************************************************************************/
/*NOMBRE DE FUNCION:rellenar()															 */
/*DESCRIPCION:funcion para rellenar la agenda										 */
/*PARAMETROS:pcP-->puntero que apunta al array										 */
/*RETORNO:																						 */
/****************************************************************************/
void rellenar(char *pcP[F][K])
{
	int	iF;
	for (iF=0; iF<F; iF++)
	{
		printf ("\n Introduce una provincia para el elemento %d de la tabla:",iF+1);
		if (iF==0)
		{
			gets(pcP[iF][0]);  //columna 0 SON LAS PROVINCIAS//
		}
		gets(pcP[iF][0]);  //columna 0 SON LAS PROVINCIAS//
		printf ("\n Introduce ahora un prefijo para la provincia %d::", iF+1);
		gets(pcP[iF][1]);  //columna 1 SON LOS PREFIJOS//

	}
	for (iF=0; iF<F; iF++)
	{
		puts(pcP[iF][0]);
		puts(pcP[iF][1]);
	}
	return;
}

/****************************************************************************/
/*NOMBRE DE FUNCION:Pprovincia															 */
/*DESCRIPCION:realiza la busqeda por provincia										 */
/*PARAMETROS:pcP-->puntero apunta a array												 */
/*RETORNO:																						 */
/****************************************************************************/
void pprovincia(char *pcP[F][K])
{
	int	iF,iC;
	char	*scpAux;
	scpAux=(char *) malloc(10);
	if(!scpAux)
	{
		printf("\n imposible reservar memoria");
	}
	printf ("\n Introduce provincia a buscar");
	gets(scpAux);
	gets(scpAux);
	for (iF=0; iF<F; iF++)
	{
		if(strcmp(pcP[iF][0],scpAux)==0)
		{
			printf ("\n elemento encontrado!. en la fila %d", iF+1);
			printf ("\n su prefijo es: %s", pcP[iF][1]);
			return;
		}
	}
	printf("\n Elemento no encontrado!");
   return;
}



/****************************************************************************/
/*NOMBRE DE FUNCION:pprefijo																 */
/*DESCRIPCION:realiza la busqueda por prefijo										 */
/*PARAMETROS:pcP-->puntero apunta a array												 */
/*RETORNO:																						 */
/****************************************************************************/
void pprefijo(char *pcP[F][K])
{
	int	iF,iC;
	char	*scpAux;

	scpAux=(char *) malloc(10);
	if(!scpAux)
	{
		printf("\n imposible reservar memoria");
	}
	printf ("\n Introduce prefijo a buscar");
	gets(scpAux);
	gets(scpAux);
	for (iF=0; iF<F; iF++)
	{
		if(strcmp(pcP[iF][1],scpAux)==0)
		{
			printf ("\n elemento encontrado!. en la fila %d", iF+1);
			printf ("\n su prefijo es: %s", pcP[iF][0]);
			return;
		}
	}
	printf("\n Elemento no encontrado!");
	return;
}


