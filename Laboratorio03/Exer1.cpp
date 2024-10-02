#include <iostream>

class Persona{
    private:
        std::string nombre;
        int edad;
        std::string sexo;
    
    public:
    // Constructor
    Persona(std::string n, int e, std::string s):nombre(n), edad(e), sexo(s){  }
    
    // Getters
    std::string getNombre() const {
        return nombre;
    }
    
    int getEdad() const {
        return edad;
    }
    
    std::string getSexo() const {
        return sexo;
    }
    
    // Setters
    void setNombre(std::string n){
        nombre = n;
    }
    
    void setEdad(int e){
        edad = e;
    }
    
    void setSexo(std::string s){
        sexo = s;
    }
    
    // Métodos
    void saludar() const {
        std::cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " anios." << std::endl;
    }
};

class Arquitecto : public Persona
{
    private:
        std::string presentacion;
    
    public:
    // Constructor
        Arquitecto(std::string nom, int edad_, std::string sexo_)
           : Persona(nom, edad_, sexo_){
            if(edad_ < 30){
                presentacion = "Soy un arquitecto joven";
            } else {
                presentacion = "Soy un arquitecto adulto";
            }
           }
            //presentacion = "Soy un arquitecto";
        void saludar () const {
            Persona::saludar();
            std::cout << presentacion << std::endl;
        }
};

class Doctor : public Persona
{
    private:
        std::string presentacion;
        std::string especialidad;
    public:
        Doctor(std::string nom, int edad_, std::string sexo_, std::string esp) : Persona(nom, edad_, sexo_){
            especialidad = esp;
            if(edad_ < 40){
                presentacion = "Soy un doctor joven";
            } else {
                presentacion = "Soy un doctor adulto";
            }
        }
        void saludar () const {
            Persona::saludar();
            std::cout << presentacion << " y especialidad en " << especialidad << std::endl;
        }
}

class Enfermera : public Persona{
    private:
        std::string presentacion;
}

int main() {
    Arquitecto arquitecto("Juan", 45, "Hombre");
    arquitecto.saludar();
    return 0;
}