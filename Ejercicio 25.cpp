#include <iostream>
#include <iomanip>
#include <cmath>

class Triangulo{
    private:
        double base;
        double altura;
        double hipotenusa;

    public:
        Triangulo(double b, double h): base{b}, altura{h}{
            hipotenusa = sqrt(base*base + altura*altura);
        }

        double getBase() const{
            return base;
        }

        double getAltura() const{
            return altura;
        }

        double getHipotenusa() const{
            return hipotenusa;
        }

        void imprimir() const{
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"Base     : "<<base<<"\n";
            std::cout<<"Altura   : "<<altura<<"\n";
            std::cout<<"Hipotenusa: "<<hipotenusa<<"\n";
        }
};

int main(){
    Triangulo t1(3, 4);
    t1.imprimir();
}
