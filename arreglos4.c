#include <stdio.h>


// TODO: (10) Declara un prototipo de una función
//  id: suma
//  tipo de retorno int
//  argumento un apuntador a entero y un entero
int suma(int*ptr, int resultado);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    

    // TODO: (11) Crea una variable llamada resultado  y asigna lo que devuelve la función suma
    // pasa a la función el arreglo y su tamaño
    int resultado = suma(arr, 5);
    
    // TODO: (12) Imprime el resultado
    printf("%d", resultado);
    return 0;
}


//TODO: (13) Crea la función suma que realiza la suma de todos los elementos de un arreglo
int arr[5] = {1, 2, 3, 4, 5};
int suma(int *ptr, int resultado){
ptr = arr;
for(int i= 0; i<5; i++){
    printf("%d, ", *(ptr +i) );
}
}
int calcularsuma(int ptr[], int 5){
    int sumas = 0;
for (int i= 0; i<5; i++){
    sumas += ptr[i];
}