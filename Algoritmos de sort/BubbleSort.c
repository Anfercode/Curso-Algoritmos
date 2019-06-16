/*
1 - Comparacion de los elementos adyacentes
2 - Repetimos hasta tener una pasada completa sin ningun swap
*/

#include <stdio.h>

void cambiar_pos(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubblesort(int array[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if(array[j]<array[j+1])
                cambiar_pos(&array[j],&array[j+1]);
        }
    }
}

int print_array(int array[], int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d  ,",array[i]);
    }
    printf("\n fin del ordenamiento");
}

int main(int argc, char const *argv[])
{
    int array[] = {100,1992,0,5,-1,60,70,14,15,10};
    int n = sizeof(array)/sizeof(array[0]);
    bubblesort(array,n);
    print_array(array,n);
    printf("\n");
    return 0;
}
