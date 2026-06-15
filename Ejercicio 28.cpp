#include <iostream>
#include <iomanip>
#include <string>

class ItemInventario{
    private:
        std::string codigo;
        std::string nombre;
        int cantidad;
        double precio;

    public:
        ItemInventario(std::string c, std::string n, int cant, double p): codigo{c}, nombre{n}{
            cantidad = (cant >= 0) ? cant : 0;
            precio = (p >= 0) ? p : 0;
        }

        std::string getCodigo() const{
            return codigo;
        }

        std::string getNombre() const{
            return nombre;
        }

        int getCantidad() const{
            return cantidad;
        }

        double getPrecio() const{
            return precio;
        }

        void setCantidad(int cant){
            if(cant >= 0) cantidad = cant;
            else std::cout<<"Cantidad invalida.\n";
        }

        void setPrecio(double p){
            if(p >= 0) precio = p;
            else std::cout<<"Precio invalido.\n";
        }

        double valorTotal() const{
            return cantidad * precio;
        }

        void vender(int n){
            if(n <= 0){
                std::cout<<"Cantidad invalida.\n";
            }
            else if(n <= cantidad){
                cantidad -= n;
                std::cout<<"Venta de "<<n<<" unidades. Quedan: "<<cantidad<<"\n";
            }
            else{
                std::cout<<"Stock insuficiente. Solo hay "<<cantidad<<" unidades.\n";
            }
        }

        void reabastecer(int n){
            if(n > 0){
                cantidad += n;
                std::cout<<"Reabastecido: +"<<n<<" unidades. Total: "<<cantidad<<"\n";
            }
            else{
                std::cout<<"Cantidad invalida.\n";
            }
        }

        void imprimir() const{
            std::cout<<std::fixed<<std::setprecision(2);
            std::cout<<"["<<codigo<<"] "<<nombre<<" | Cant: "<<cantidad;
            std::cout<<" | Precio: $"<<precio<<" | Total: $"<<valorTotal()<<"\n";
        }
};

int main(){
    ItemInventario item("A001", "Laptop", 10, 1200);

    item.imprimir();
    item.vender(3);
    item.vender(20);
    item.reabastecer(20);
    item.imprimir();
}
