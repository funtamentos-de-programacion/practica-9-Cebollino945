#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    
    int *ptr [3];
    
   
    ptr[0]= &a;
    ptr[1]= &b;
    ptr[2]= &c;
   
    for (int i = 0; i < 3; i++) {
        printf("Los valores son %d: %d\n", i, *ptr[i]);
    }
    
    return 0;
}
