#include <iostream>
#include <string>

class Animal{
    protected:
        std::string nombre;

    public:
        Animal(std::string n): nombre{n} {}

        std::string getNombre() const{
            return nombre;
        }

        virtual void hacerSonido() const{
            std::cout<<"...\n";
        }

        virtual void imprimir() const{
            std::cout<<"Nombre: "<<nombre<<"\n";
        }
};

class Perro : public Animal{
    private:
        std::string raza;

    public:
        Perro(std::string n, std::string r): Animal{n}, raza{r} {}

        void hacerSonido() const override{
            std::cout<<nombre<<" ("<<raza<<") dice: Guau!\n";
        }

        void imprimir() const override{
            std::cout<<nombre<<" - Raza: "<<raza<<"\n";
        }
};

class Gato : public Animal{
    private:
        bool esCallejero;

    public:
        Gato(std::string n, bool c): Animal{n}, esCallejero{c} {}

        void hacerSonido() const override{
            std::cout<<nombre<<" (Callejero: "<<(esCallejero ? "Si" : "No")<<") dice: Miau!\n";
        }

        void imprimir() const override{
            std::cout<<nombre<<" - Callejero: "<<(esCallejero ? "Si" : "No")<<"\n";
        }
};

int main(){
    Perro p1("Rex", "Labrador");
    Gato g1("Luna", false);

    p1.hacerSonido();
    p1.imprimir();

    g1.hacerSonido();
    g1.imprimir();
}
