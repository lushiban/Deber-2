#include <iostream>
#include <iomanip>

class Punto3D{
    public:
        double x, y, z;

        Punto3D(): x{0}, y{0}, z{0} {}
        Punto3D(double x1, double y1, double z1): x{x1}, y{y1}, z{z1} {}

        void imprimir(){
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"("<<x<<", "<<y<<", "<<z<<")\n";
        }
};

int main(){
    Punto3D p1;
    Punto3D p2(3, 1, 4);
    Punto3D p3(1, 5, 9);

    p1.imprimir();
    p2.imprimir();
    p3.imprimir();
}