#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];
    int i;

    for(i = 0; i < 5; i++)
        {
            printf("ingrese un numero \n\n");
            scanf("%d",&numeros[i]);
        }

    for(i = 0; i < 5; i++)
        {
            printf("\n %d",numeros[i]);
        }

    return 0;
}
