#include <iostream>

class Base{
    public:
        Base(){
            std::cout<<"Base creada\n";
        }

        ~Base(){
            std::cout<<"Base destruida\n";
        }
};

class Derivada : public Base{
    public:
        Derivada(){
            std::cout<<"Derivada creada\n";
        }

        ~Derivada(){
            std::cout<<"Derivada destruida\n";
        }
};

int main(){
    Derivada d;
}
