#include <iostream>

class Forma {
public:
    virtual void dibujar() { // Método virtual
        std::cout << "Dibujar forma" << std::endl;
    }
};

class Circulo : public Forma {
public:
    void dibujar() override { // Sobrescribe el método
        std::cout << "Dibujar círculo" << std::endl;
    }
};

class Cuadrado : public Forma {
public:
    void dibujar() override { // Sobrescribe el método
        std::cout << "Dibujar cuadrado" << std::endl;
    }
};

void mostrarDibujo(Forma* forma) {
    forma->dibujar(); // Llama al método correspondiente según el tipo real
}

int main() {
    Forma* forma1 = new Circulo();
    Forma* forma2 = new Cuadrado();
    
    mostrarDibujo(forma1); // Salida: Dibujar círculo
    mostrarDibujo(forma2); // Salida: Dibujar cuadrado

    delete forma1;
    delete forma2;
    return 0;
}

