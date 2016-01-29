/** @file main.c
 *  @brief The main program
 *
 *  
 *  El siguiente programa contiene el uso de apuntadores
 *  en un algoritmo bubblesort
 *
 *  @author Juan Carlos Olivier Jasso - A01550176
 *  @bug No known bugs.
 */

#include <math.h>
#include <stdio.h>
#include "functions.h"



void llenado(int **a){

    for(int i=0;i<6;i++){

        printf("Introduce los valores : ");
        scanf("%d",&a[i]);
        printf("\n");
    }  
}


void bubblesort(int **a){
	int *temp;

	 for(int k=0;k<6;k++)    
    {
        for(int j=0;j<5-k;j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                }
        }
    } 

}


void imprimir (int **a){

printf("Arreglo ordenado : \n");
    for(int i=0;i<6;i++){    
       
        printf("%d ",a[i]);
        }
    printf("\n");

}