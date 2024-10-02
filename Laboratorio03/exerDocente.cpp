#include <iostream>
using namespace std;

class infante {
    private:
        string nombre;
    public:
        infante(const string &nom) {
            nombre = nom;
        }
        void gatear() {
            cout << nombre << " gatea." << endl;
        }
};

class joven {
    private:
        string nombre;
    public:
        joven(const string &nom) {
            nombre = nom;
        }
        void correr() {
            cout << nombre << " corre." << endl;
        }
};

class adulto : public infante, public joven {
    private:
        string nombre;
    public:
        // Implementación del constructor adulto
        adulto(const string &nom) : infante(nom), joven(nom), nombre(nom) {
        }
        void caminar() {
            cout << nombre << " camina." << endl;
        }
};

int main() {
    infante pequeño("Pequenio");
    joven jovenito("Joven");
    adulto adulto_mujer("Adulto Mujer");

    pequeño.gatear();
    jovenito.correr();
    adulto_mujer.caminar();

    return 0;
}
