#include <iostream>

class Mamifero{
    public:
        Mamifero() : edad () {std::cout << "Mamifero constructor....\n" << std::endl;}
        //Mamifero() {std::cout << "Mamifero constructor....\n" << std::endl
        ~Mamifero() {std::cout << "Mamifero destructor..\n" << std::endl
        void Move() const {std::cout << "Mamifeor move one step\n";}
        virtual coid speak() const {std::cout << "Mamifero speak!..\n";}
    
    protected:
        int edad;

};

class Dog : public Mamifero{
    public:
        Dog() { std::cout << "Dog constructor....\n" << std::endl;}
        ~Dog() {std::cout << "Dog destructor..\n" << std::endl;}
        void WagTail() {std::cout << "Wagging Tail...\n" << std::endl;}
        void Move() const override {std::cout << "Dog run two steps\n";}
        void speak() const override {std::cout << "Dog bark!..\n";}
};

int main() {
    Mamifero* mamifero = new Dog();
    mamifero->Move();
    mamifero->speak();
    delete mamifero;
    return 0;
}