#include <iostream>
#include <iomanip>

class Matematica{
    public:
        static int maximo(int a, int b){
            if(a > b) return a;
            else return b;
        }

        static int minimo(int a, int b){
            if(a < b) return a;
            else return b;
        }

        static bool esPrimo(int n){
            if(n <= 1) return false;

            for(int i{2}; i < n; i++){
                if(n % i == 0) return false;
            }
            return true;
        }

        static double potencia(double base, int exp){
            double resultado{1};

            for(int i{0}; i < exp; i++){
                resultado *= base;
            }
            return resultado;
        }
};

int main(){

    std::cout<<"Maximo(8, 3): "<<Matematica::maximo(8, 3)<<"\n";
    std::cout<<"Minimo(8, 3): "<<Matematica::minimo(8, 3)<<"\n";
    std::cout<<"Es primo 7: "<<(Matematica::esPrimo(7) ? "SI" : "NO")<<"\n";
    std::cout<<"Es primo 9: "<<(Matematica::esPrimo(9) ? "SI" : "NO")<<"\n";
    std::cout<<"2 elevado a 10: "<<Matematica::potencia(2, 10)<<"\n";
}
