#include <iostream>
#include <iomanip>
#include <cmath>

class Punto{
    public:
        double x, y;
        Punto(double a, double b): x{a}, y{b} {}
        void imprimir() const{
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"("<<x<<", "<<y<<")";
        }
        double distanciaA(Punto otro) const{
            return sqrt((x-otro.x)*(x-otro.x) + (y-otro.y)*(y-otro.y));
        }
};

class Segmento{
    public:
        Punto inicio, fin;

        Segmento(Punto p1, Punto p2): inicio{p1}, fin{p2} {}

        double longitud(){
            return inicio.distanciaA(fin);
        }

        void imprimir(){
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"Inicio: ";
            inicio.imprimir();
            std::cout<<"\n";

            std::cout<<"Fin   : ";
            fin.imprimir();
            std::cout<<"\n";

            std::cout<<"Longitud: "<<longitud()<<"\n";
        }
};

int main(){
    Punto p1(0, 0);
    Punto p2(3, 4);

    Segmento s1(p1, p2);
    s1.imprimir();
}