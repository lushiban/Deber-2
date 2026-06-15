#include <iostream>
#include <iomanip>
#include <string>

class Cuenta{
    public:
        std::string titular;
        double saldo;

        Cuenta(std::string t, double s): titular{t}, saldo{s>=0 ? s : 0} {}

        void depositar(double monto){
            saldo += monto;
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"Deposito: $"<<monto<<" | Nuevo saldo: $"<<saldo<<"\n";
        }

        void retirar(double monto){
            if(tieneSaldo(monto) == true){
                saldo -= monto;
                std::cout<<std::fixed<<std::setprecision(2);
                std::cout<<"Retiro: $"<<monto<<" | Nuevo saldo: $"<<saldo<<"\n";
            }
            else{
                std::cout<<"Saldo insuficiente.\n";
            }
        }

        bool tieneSaldo(double monto){
            return saldo >= monto;
        }

        void imprimir(){
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"Titular: "<<titular<<" | Saldo: $"<<saldo<<"\n";
        }
};

int main(){
    Cuenta c1("Ana Torres", 500);

    c1.imprimir();
    c1.depositar(200);
    c1.retirar(100);
    c1.retirar(800);
    c1.imprimir();
}
