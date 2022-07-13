#include "pointers.h"


void definition_pointers(void)
{
		void *current_pointer = NULL; 
		// (double) == direccion el tamaño es double
		/*
		 * void * => Es el tipo de dato del valor que se almacena en la 
		 *         direcion y no de la variable puntero, porque la variable
		 *		   puntero siempre va ser de tipo double y eso no lo cambiaremos
		 *		   en ninguna circustancia.
		 *
		 * void * => Tipo de dato los cuales pueden ser
		 * 			- int (4)
		 * 			- char (1)
		 * 			- float (8)
		 * 			- short (4)
		 * 			- double (8)
		 * 			- void * = (desconocido) (generico) 
		 * (Arquitectura): La Arquitectura del procesador:
		 * 			- 64bit
		 * 			- 32bit == 86bit
		 * 			- 16bit
		 * 			- 8bit
		 * 			- ARM 
		 * 			- Intel 
		 * 			- AMD
		 *
		 * 	En la inicializacion:
		 * 		    - Siempre en los punteros vamos a darles el valor NULL == (void *)0
		 * 		    - Porque la direcccion 0 no existe y asi evitamos tener una direccion
		 * 		      que no nos corresponda.
		 *
		 *
		 * 	(Casting): cambiar el tipo de dato a otro que sea compatible
		 * 			- Ejemplo: 
		 * 				* (int)0: lo manejare como un entero 0
		 * 				* (void)0: lo manejare como un dato generico / direcion generica
		 * 				* (char)0: lo manejare como un caracter '\0'
		 * 				* (float)0: lo manejare como un punto flotante 0.0
		 * 			- Ejemplo error: 
		 * 				* (unsigned int)-1: no es compatible es casting. lanza un error
		 *
		 *
		 */
}


