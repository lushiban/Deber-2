#include <iostream>
#include <iomanip>
#include <string>

class CuentaBancaria{
    private:
        std::string titular;
        double saldo;

    public:
        CuentaBancaria(std::string t, double s): titular{t}{
            saldo = (s >= 0) ? s : 0;
        }

        std::string getTitular() const{
            return titular;
        }

        double getSaldo() const{
            return saldo;
        }

        void depositar(double monto){
            if(monto > 0){
                saldo += monto;
                std::cout<<std::fixed<<std::setprecision(2);
                std::cout<<"Deposito: $"<<monto<<". Saldo: $"<<saldo<<"\n";
            }
            else{
                std::cout<<"Error: monto debe ser positivo.\n";
            }
        }

        void retirar(double monto){
            if(monto <= 0){
                std::cout<<"Error: monto debe ser positivo.\n";
            }
            else if(monto <= saldo){
                saldo -= monto;
                std::cout<<std::fixed<<std::setprecision(2);
                std::cout<<"Retiro: $"<<monto<<". Saldo: $"<<saldo<<"\n";
            }
            else{
                std::cout<<"Error: saldo insuficiente.\n";
            }
        }

        void imprimir() const{
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<titular<<": $"<<saldo<<"\n";
        }
};

int main(){
    CuentaBancaria cuenta("Ana Torres", -100);

    cuenta.imprimir();
    cuenta.depositar(500);
    cuenta.retirar(200);
    cuenta.retirar(500);
    cuenta.depositar(-50);
    cuenta.imprimir();
}
