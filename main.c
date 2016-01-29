/** @file main.c
 *  @brief The main program
 *
 *  
 * 	El siguiente programa contiene el uso de apuntadores
 *	en un algoritmo bubblesort
 *
 *  @author Juan Carlos Olivier Jasso - A01550176
 *  @bug No known bugs.
 */


#include <stdio.h> //Librerias para leer y operaciones 
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "functions.h"



/** @brief El programa principal se crea el arreglo
 * 
 *  @a[]arreglo donde se guard la informacion
 *	@*arrPtr apuntador al arreglo
 *  @return 0
 */


int main(){   


 	int a[6];     
    int *arrPtr=a;  

    llenado(&arrPtr);
    bubblesort(&arrPtr);
    imprimir(&arrPtr);


    return 0;
}
