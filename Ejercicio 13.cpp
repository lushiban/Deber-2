#include <iostream>
#include <iomanip>

class Circulo{
    public:
        const double PI;
        double radio;

        Circulo(double r): PI{3.14159}, radio{r>=0 ? r : 0} {}

        double area(){
            return PI * radio * radio;
        }

        double perimetro(){
            return 2 * PI * radio;
        }

        void imprimir(){
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"Radio: "<<radio<<"\n";
            std::cout<<"Area: "<<area()<<"\n";
            std::cout<<"Perimetro: "<<perimetro()<<"\n";
        }
};

int main(){
    Circulo c1(7.0);
    c1.imprimir();
}
