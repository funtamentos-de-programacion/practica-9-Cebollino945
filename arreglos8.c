#include <stdio.h>


//  id: suma
//  @return varible de tipo int
//  @param una matriz
//  @param el número de filas
int suma(int a[][3], int f);
int suma2(int **a, int f, int c);

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int res = suma(arr, 3);
    int *ptr = &res;
    printf("%d\t", *(ptr));
    //res = suma2(arr, 3, 3); no funciona porque &arr de una matriz  y arr de un arreglo 
    //printf("%d\t", *(ptr)); 
    return 0;
}

int suma2(int **a, int f, int c){
int r=0;
     for (int i = 0; i < f; i++) {
        for (int j = 0; j < 3; j++) {
            r += a[i][j];
        }
    }
    return r;
}




//TODO: (25) Crea la función suma que realiza la suma de todos los elementos de un arreglo
int suma(int a[][3], int f){
    int r=0;
     for (int i = 0; i < f; i++) {
        for (int j = 0; j < 3; j++) {
            r += a[i][j];
        }
        printf("\n");
    }
    return r;

}
