#include <iostream>
#include <string>

class Semaforo{
    private:
        std::string estado;

    public:
        Semaforo(): estado{"rojo"} {}

        std::string getEstado() const{
            return estado;
        }

        void avanzar(){
            if(estado == "rojo") estado = "verde";
            else if(estado == "verde") estado = "amarillo";
            else estado = "rojo";
        }

        void imprimir() const{
            std::cout<<"Estado: "<<estado<<"\n";
        }
};

int main(){
    Semaforo s1;

    s1.imprimir();
    for(int i{0}; i<7; i++){
        s1.avanzar();
        s1.imprimir();
    }
}
