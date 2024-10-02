#include <iostream>
#include <string>

// Clase base que representa un virus general
class Virus {
public:
    std::string nombre;
    Virus(std::string nombreVirus) : nombre(nombreVirus) {}
    
    virtual void mostrarCaracteristicas() {
        std::cout << "Soy un virus. Mi nombre es: " << nombre << std::endl;
    }
};

// Cepa Delta del coronavirus
class CepaDelta : public Virus {
public:
    CepaDelta() : Virus("Cepa Delta") {}

    void mostrarCaracteristicas() override {
        std::cout << nombre << ": Soy altamente transmisible." << std::endl;
    }
};

// Cepa Omicron del coronavirus
class CepaOmicron : public Virus {
public:
    CepaOmicron() : Virus("Cepa Omicron") {}

    void mostrarCaracteristicas() override {
        std::cout << nombre << ": Tengo una alta capacidad de evasion inmunitaria." << std::endl;
    }
};

// Cepa Alpha del coronavirus
class CepaAlpha : public Virus {
public:
    CepaAlpha() : Virus("Cepa Alpha") {}

    void mostrarCaracteristicas() override {
        std::cout << nombre << ": Fui la primera cepa dominante a nivel mundial." << std::endl;
    }
};

// Cepa Beta del coronavirus
class CepaBeta : public Virus {
public:
    CepaBeta() : Virus("Cepa Beta") {}

    void mostrarCaracteristicas() override {
        std::cout << nombre << ": Soy conocida por mi capacidad de evasion de anticuerpos." << std::endl;
    }
};

// Cepa Gamma del coronavirus
class CepaGamma : public Virus {
public:
    CepaGamma() : Virus("Cepa Gamma") {}

    void mostrarCaracteristicas() override {
        std::cout << nombre << ": Tengo una alta capacidad de transmision en Sudamerica." << std::endl;
    }
};

// Clase que combina características de múltiples cepas utilizando herencia múltiple
class CepaHibrida : public CepaDelta, public CepaOmicron, public CepaAlpha, public CepaBeta, public CepaGamma {
public:
    CepaHibrida() {}

    // Método para mostrar las características de la cepa híbrida
    void mostrarCaracteristicas() {
        std::cout << "Soy una cepa hibrida con las siguientes caracteristicas: " << std::endl;
        CepaDelta::mostrarCaracteristicas();
        CepaOmicron::mostrarCaracteristicas();
        CepaAlpha::mostrarCaracteristicas();
        CepaBeta::mostrarCaracteristicas();
        CepaGamma::mostrarCaracteristicas();
    }
};

int main() {
    CepaHibrida hibrida;
    hibrida.mostrarCaracteristicas();
    
    return 0;
}
