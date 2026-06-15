#include <iostream>
#include <iomanip>

class Vector2D{
    private:
        double x, y;

    public:
        Vector2D(double x, double y): x{x}, y{y} {}

        double getX() const{
            return x;
        }

        double getY() const{
            return y;
        }

        void setX(double x){
            this->x = x;
        }

        void setY(double y){
            this->y = y;
        }

        void imprimir() const{
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"("<<x<<", "<<y<<")";
        }
};

int main(){
    Vector2D original(3, 4);
    Vector2D copia = original;

    std::cout<<"Original: ";
    original.imprimir();
    std::cout<<"\n";

    std::cout<<"Copia:    ";
    copia.imprimir();
    std::cout<<"\n";

    std::cout<<"[modificar copia a (10, 20)]\n";
    copia.setX(10);
    copia.setY(20);

    std::cout<<"Original: ";
    original.imprimir();
    std::cout<<"\n";

    std::cout<<"Copia:    ";
    copia.imprimir();
    std::cout<<"\n";
}

