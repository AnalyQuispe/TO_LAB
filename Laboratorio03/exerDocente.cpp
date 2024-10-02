#include <iostream>

class infante{
    private:
        int nombre;
    public:
        infante(const string &nom){
            nombre = nom;
        }
        void gatear(){
            cout << nombre << " gatea." << endl;
        }
};

class joven {
    private:
        string nombre;
    public:
        joven(const string &nom){
            nombre = nom;
        }
        void correr() {
            cout << nombre << " corre." << endl;
        }
};

class adulto {
    private:
        string nombre;
    public:
        adulto(const string &nom);
        void caminar() {
            cout << nombre << " camina." << endl;
        }
};

int main(){
    infante pequeño("Pequeño");
    joven jovenito("Joven");
    adulto adulto_mujer("Adulto Mujer");

    pequeño.gatear();
    jovenito.correr();
    adulto_mujer.caminar();
    
    return 0;
}