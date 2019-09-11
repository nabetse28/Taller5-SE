#include <operaciones.h>
#include <stdio.h>

int main()
{
    printf("Suma: %.2f\n",sum(5.0, 10.0));
    printf("Resta: %.2f\n",sub(5.0, 10.0));
    printf("Multiplicacion: %.2f\n",mul(5.0, 10.0));
    printf("Division: %.2f\n",div(5.0, 10.0));
    printf("Raiz: %.2f\n",sqr(5.0));
    return 0;
}   