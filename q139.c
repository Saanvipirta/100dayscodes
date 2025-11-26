//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Example {
    A,       
    B,       
    C = 10,   
    D,        
    E = 5,    
    F         
};

int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);
    printf("F = %d\n", F);

    return 0;
}
