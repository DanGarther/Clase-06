#include <stdio.h>
#include <stdlib.h>
#define T 5 //Define una variable global, en este caso T = 5
#include "Vectores.h"


int main()
{
    int vectorDeNumeros[T];//={7,-5,10,-6,-1,-4,10,5,4,-6};
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int minimo;
    int opcion;
    int flag = 0;



    do{
    printf("1) Cargar numeros.\n");
    printf("2) Mostrar todo.\n");
    printf("3) Mostrar negativos.\n");
    printf("4) Mostrar promedio de positivos.\n");
    printf("5) Mostrar maximos.\n");
    printf("6) Mostrar minimo.\n");
    printf("7) Salir.\n");
    printf("Elija una opcion.");
    scanf("%d", &opcion);


    switch(opcion){

case 1:

cargarVector(vectorDeNumeros, T);

    break;

case 2:
      printf("\tMUESTRO EL VECTOR\n");
    for(i=0; i<T; i++)
    {
        printf("%d\n", vectorDeNumeros[i]);
    }
    break;

case 3:
       printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
    for(i=0; i<T; i++)
    {
        if(vectorDeNumeros[i]<0)
        {
           printf("%d\n", vectorDeNumeros[i]);
        }

    }
break;

case 4:

   for(i=0; i<T; i++)
    {
        if(vectorDeNumeros[i]>0)
        {
            sumaDePositivos += vectorDeNumeros[i];
            contadorDePositivos++;
        }
    }
    promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

    printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);


     printf("\n\nPROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);

     break;


case 5:

max(vectorDeNumeros, T);

break;

case 6:




  for(i=0; i<10; i++){


         if(flag == 0 || vectorDeNumeros[i] < minimo){

            minimo = vectorDeNumeros[i];

flag = 1;

        }


     }



     printf("\nMINIMO: %d", minimo);

       for(i=0; i<10; i++){

        if(vectorDeNumeros[i]==minimo){

            printf("\n%d ", i);
        }


    }

    break;



    }
    system("pause");
    system("cls");




}while(opcion != 7);

    return 0;
}
