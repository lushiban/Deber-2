#include <iostream>
#include <iomanip>

class Rectangulo{
    public:
        double base, altura;

        Rectangulo(double b, double h): base{b}, altura{h} {}

        double calcularArea(){
            return base * altura;
        }

        double calcularPerimetro(){
            return 2 * (base + altura);
        }

        void imprimir(){
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"Base: "<<base<<", Altura: "<<altura<<"\n";
            std::cout<<"Area: "<<calcularArea()<<"\n";
            std::cout<<"Perimetro: "<<calcularPerimetro()<<"\n";
        }
};

int main(){
    Rectangulo r1(6.0, 4.0);
    Rectangulo r2(10.0, 2.5);

    r1.imprimir();
    r2.imprimir();
}
