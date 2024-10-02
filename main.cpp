#include <iostream>

class Trabajador{
    private:
        std::string nombre;
        int edad;
        std::string sexo;
		std::string rol;
		int id;
    
    public:
    // Constructor
    Trabajador(std::string n, int e, std::string s, std::string rol_, int id_):nombre(n), edad(e), sexo(s), rol(rol_), id(id_){  }
    
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
	
	std::string getRol() const {
		return rol;
	}
	
	int getId() const {
		return id;
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
	
	void setRol(std::string r){
		rol = r;
	}
	
	void setID(int id_){
		id = id_;
	}
    
    // Métodos
    
};

class Programador : public Trabajador
{
    private:
        std::string presentacion;
    
    public:
    // Constructor
        Programador(std::string nom, int edad_, std::string sexo_)
           : Persona(nom, edad_, sexo_){
            if(edad_ < 30){
                presentacion = "Soy un arquitecto joven";
            } else {
                presentacion = "Soy un arquitecto adulto";
            }
        }
		   
        void saludar () const {
            Persona::saludar();
            std::cout << presentacion << std::endl;
        }
};

class ProgramadorSuperUs : public Programador, public Trabajador, public Cerrojo
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
};

class Cerrojo{
    protected:
        bool estado;
		int clave;

    public:
        Enfermera(std::string nom, int edad_, std::string sexo_) : Persona(nom, edad_, sexo_){
            presentacion = "Hola soy una enfermera.";
        }
        void saludar () const {
            Persona::saludar();
            std::cout << presentacion << std::endl;
        }
};

class Empresa{
    private:
    std::string presentacion;
    
    public:
    Bombero(std::string nom, int edad_, std::string sexo_) : Persona(nom, edad_, sexo_){
        presentacion = "Hola soy un bombero y apago incendios.";
    }
};

int main() {
    Arquitecto arquitecto("Juan", 45, "Hombre");
    arquitecto.saludar();

    Doctor doctor("Ana", 50, "Mujer", "Cardiologia");
    doctor.saludar();

    Enfermera enfermera("Luis", 30, "Hombre");
    enfermera.saludar();
    
    Bombero bombero("Maria", 25, "Mujer");
    bombero.saludar();

    return 0;
}