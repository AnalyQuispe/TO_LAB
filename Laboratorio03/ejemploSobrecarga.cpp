#include <iostream>

// Función sobrecargada para sumar enteros
int sumar(int a, int b) {
    return a + b;
}

// Función sobrecargada para sumar números de punto flotante
double sumar(double a, double b) {
    return a + b;
}

int main() {
    std::cout << "Suma de enteros: " << sumar(5, 10) << std::endl; // Llama a la versión de enteros
    std::cout << "Suma de flotantes: " << sumar(5.5, 2.5) << std::endl; // Llama a la versión de flotantes
    return 0;
}

