#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numeros [5];
   int i;
   int acumulador = 0;

   for(i = 0; i < 5 ; i++)
    {
        printf("ingrese numero: ");
        scanf("%d", &numeros[i]);
    }
    acumulador += numeros;

    printf("%d",acumulador);

}
