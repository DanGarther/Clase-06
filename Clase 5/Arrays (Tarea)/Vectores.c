#include "Vectores.h"

void cargarVector(int vector[], int tam){

  int i;


    printf("\tCARGA DE DATOS\n");
    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }


void max(int vector[], int tam){

  int maximo;
int i;

maximo = calcularMax(vector, tam);

printf("MAXIMO: %d\n", maximo);

     for(i=0; i<tam; i++){

        if(vector[i]==maximo){

            printf("\n%d\n ", i);
        }
     }



}

}


void calcularMax(int  vector[], int tam){

 int flag = 0;
  int i;
  int maximo;

  for(i=0; i<tam; i++){



        if(flag == 0 || vector[i] > maximo){

            maximo = vector[i];

        }
        }


}
