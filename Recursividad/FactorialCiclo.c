#include <stdio.h>

int resultado;

int factorial(int n)
{
    resultado = 1;
    for (int i = 1; i <= n; i++)
    {
        resultado = resultado * i;
    }

    return resultado;
}

int main(int argc, char const *argv[])
{
    int numero = factorial(3);
    printf("%d",numero);
    return 0;
}
