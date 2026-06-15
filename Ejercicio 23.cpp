#include <iostream>
#include <iomanip>
#include <string>

class Libro{
    private:
        std::string titulo;
        std::string autor;
        int anio;
        double precio;

    public:
        Libro(std::string t, std::string a, int an, double p): titulo{t}, autor{a}, anio{an}{
            precio = (p >= 0) ? p : 0;
        }

        const std::string& getTitulo() const{
            return titulo;
        }

        const std::string& getAutor() const{
            return autor;
        }

        int getAnio() const{
            return anio;
        }

        double getPrecio() const{
            return precio;
        }

        void setPrecio(double p){
            if(p >= 0) precio = p;
            else std::cout<<"Precio invalido.\n";
        }

        void imprimir() const{
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"Titulo: "<<titulo<<"\n";
            std::cout<<"Autor : "<<autor<<"\n";
            std::cout<<"Anio  : "<<anio<<"\n";
            std::cout<<"Precio: $"<<precio<<"\n";
        }
};

int main(){
    Libro l1("El Principito", "Antoine de Saint-Exupery", 1943, 12.50);
    l1.imprimir();
}