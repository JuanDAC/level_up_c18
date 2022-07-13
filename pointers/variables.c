#include "pointers.h"


/**
 * numeros base:
 * 		- 10: 0 1 2 3 4 5 6 7 8 9
 * 		- 16: 0 1 2 3 4 5 6 7 8 9 A B C D E F
 * 		- 2: 0 1
 * 		- 8: 0 1 2 3 4 5 6 7
 */

void point_to_variable(void)
{
		int integer = 10;
		int hexadecimal = 0xF; // 15
		double float_number = 1.8;
		void *current_pointer = NULL;
		int *pointer_to_int = NULL;

		current_pointer = &integer;
		pointer_to_int = (int *)current_pointer;
		printf(
				"integer of direction size is %lu and size of value %lu \n",
				sizeof(&integer), // tamaño de la direcion el cual es un numero double
				sizeof(integer) // el tamaño del valor que se guarda en la direccion 
		);
		printf(
				"current_pointer, the direction is %p and the value is %d\n",
				current_pointer,
				*pointer_to_int
		);

		current_pointer = &float_number;
		printf(
				"float_numberthe of direction size is %lu  and size of value %lu \n",
				sizeof(&float_number), // tamaño de la direcion el cual es un numero double
				sizeof(float_number) // el tamaño del valor que se guarda en la direccion 
		);
		printf(
				"current_pointer, the direction is %p and the value is %f\n",
				current_pointer,
				*(double *)current_pointer
		);
		/**
		 * para traernos la direccion en memoria de cualquier variable
		 * usaremos el operador con el simbolo & (ampersand)
		 * 	- & and binarios // no nos interesapor el momento
		 *  - && and booleanos // no nos interesapor el momento
		 *  - & direccional, referencia
		 *  	* Nos retorna la direcion de la variable consecutiva al operador
		 *  	* la forma de usarlo es antessedido de una variable
		 * para traernos el valor que se almacena en una dirección vamos a usar
		 * el operador indireccional con el simbolo * (asterisco)
		 *  - * como declaración:
		 *  	Declaramos que una variable es un puntero:
		 *  		EJEMPLO: int *pointer_to_int = NULL;
		 *  - * como operador:
		 *  	* con numeros representa la operacion de multiplicación // no nos interesa
		 *  	* con variables de tipo punteros representa la operacion indirecional: 
		 *  	   nos trae el valor de una dirección:
		 *		    EJEMPLO: *pointer_to_int == nos trae el valor que almacena la direccion del puntero 
		 *
		 */

}
