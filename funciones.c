#include <stdio.h>

void saludo() {
    printf("Hola, bienvenido al programa de funciones en C.\n");
}

int sumar(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int main() {

    int num1=2, num2=3;

    saludo();
    printf("Suma: %d + %d = %d\n", num1, num2, sumar(num1, num2));
    
    printf("Resta: %d - %d = %d\n", num1, num2, resta(num1, num2));

    printf("Multiplicación: %d * %d = %d\n", num1, num2, multiplicacion(num1, num2));

    return 0;
}