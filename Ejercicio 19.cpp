#include <iostream>
#include <string>

class Persona{
    private:
        std::string nombre;
        int edad;
        double altura;

    public:
        Persona(std::string n, int e, double a): nombre{n}{
            edad = (e >= 0 && e <= 120) ? e : 0;
            altura = (a >= 0.5 && a <= 2.5) ? a : 0.5;
        }

        std::string getNombre() const{
            return nombre;
        }

        int getEdad() const{
            return edad;
        }

        double getAltura() const{
            return altura;
        }

        void setNombre(std::string n){
            nombre = n;
        }

        void setEdad(int e){
            if(e >= 0 && e <= 120) edad = e;
            else std::cout<<"Edad invalida.\n";
        }

        void setAltura(double h){
            if(h >= 0.5 && h <= 2.5) altura = h;
            else std::cout<<"Altura invalida.\n";
        }

        void imprimir() const{
            std::cout<<"Nombre: "<<nombre<<", Edad: "<<edad<<", Altura: "<<altura<<"m\n";
        }
};

int main(){
    Persona p1("Ana", 22, 1.65);

    p1.imprimir();
    p1.setEdad(463);
    p1.setAltura(838);
    p1.imprimir();
}
