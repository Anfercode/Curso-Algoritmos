#include <stdio.h>
#define SIZE 5

int values[SIZE], rear = -1;

void push(int value)
{
    if (rear == SIZE - 1)
        printf("Nuestro stack esta lleno \n");
    else
    {
        rear++;
        values[rear] = value;
        printf("Se inserto el valor correctamente: %d correctamente \n", value);
    }
}

void pop()
{
    if (rear == -1)
        printf("Nuestro stack esta vacio \n");
    else
    {
        printf("Se elimino el valor %d \n", values[rear]);
        rear--;
    }
}

int main(int argc, char const *argv[])
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    push(6);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    push(7);
    push(10);
    push(11);
    push(12);
    push(13);
    return 0;
}
