#include <stdio.h>
#include <stdlib.h>

void funcion(int*);



int main()
{

int numero = 4;

printf("El numero antes de modificar es: %d \n", numero);

funcion(&numero);
printf("El numero despues de modificar es: %d", numero);

    return 0;
}

void funcion(int* numero){

printf("\nIngrese numero nuevo: ");
scanf("%d", numero);

}
