#include <stdio.h>

long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int main(int argc, char const *argv[])
{
    printf("%d", factorial(3));
    return 0;
}
