/*******************************************************************/
/*fichero:10_156 																	 */
/*	programa que lee "n" numeros enteros positivos y negativos 	    */
/* y determine el mayor y el menor de todos los introducidos.		 */
/* programado por Toni Guasch Serra, a 4-05-06							 */
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
	int	iNum;
	int	iMax;
	int	iMin;
	int	iCont;
	int	iN;

	/****************************************************************/
	/*BEGIN 																			 */
	/****************************************************************/
	printf ("\n PROGRAMA QUE LEE n NUMEROS Y DETERMINA EL MAYOR Y EL MENOR");
	printf ("\n-----------------------------------------------------------");
	printf ("\n cuantos numeros desea introducir?::");
	scanf ("%d", &iN);
	printf ("\n-----------------------------------------------------------");
	printf ("\n introduce el primer numero a leer:");
	scanf ("%d", &iNum);
	iMax=iMin=iNum;
	for (iCont=1; iCont<=iN-1; iCont++)
	{
		printf ("\n introduce siguiente numero a leer:");
		scanf ("%d", &iNum);
		if (iNum>iMax)
		{
			iMax=iNum;
		}else{
			if (iNum<iMin)
			{
			iMin=iNum;
			}
		}
	}
	printf ("\n-----------------------------------------------------------");
	printf ("\n el mayor de los numeros introducidos es: %d",iMax);
	printf ("\n el menor de los numeros introducidos es: %d",iMin);
	printf ("\n-----------------------------------------------------------");
	printf ("\n FIN DEL PROGRAMA");
	/****************************************************************/
	/*END	 																			 */
	/****************************************************************/
}

