/*
1 - Crear pointer para saber que hay en front y rear
2 - colocar estos valores en -1 al inicializar
3 - incrementar en 1 el valor de "rear"
    cuando agreguemos un elemento.
4 - Retornar el valor de front al quitar un elemento
    e incrementar en 1 el valor de
    front al usar dequeue.

5 - antes de agregar un elemento revisar si hay espacio
6 - antes de remover un elemento revisamos que existan elementos
7 - asegurarnos de que al remover todos los elementos
    resetear nuestro front y rear a -1
    y agregar el valor de 0 a Front al hacer nuestro primer enqueue

 */

#include <stdio.h>
#define SIZE 5
#define OUT 0

int values[SIZE], rear = -1;

void enQueue(int value)
{
    if (rear == SIZE - 1)
        printf("Nuestro queue esta lleno \n");
    else
    {
        rear++;
        values[rear] = value;
        printf("Se inserto el valor correctamente: %d correctamente \n", value);
    }
}

void deQueue()
{
    if (rear == -1)
        printf("Nuestro queue esta vacio \n");
    else
    {
        printf("Se elimino el valor %d \n", values[OUT]);
        rear--;
        for (int i = 0; i < SIZE; i++)
        {
            values[i] = values[i + 1];
        }
    }
}

int main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    enQueue(6);
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    enQueue(7);
    enQueue(10);
    enQueue(11);
    enQueue(12);
    enQueue(13);
    return 0;
}
