#include <iostream>
#include <string>

/*
Respuestas:

a) Todos los atributos deberian ser private, porque no conviene que se modifiquen directamente desde afuera.
   Especificamente salario, edad y contrasena necesitan proteccion.

b) El setter original no tiene validacion. Si s = -5000, el salario queda negativo y eso no tiene sentido.

c) getSalario deberia ser const porque solo lee el salario, no modifica nada.

d) contrasena no deberia tener getter, porque no se debe mostrar una contrasena.
   Podria tener un setter con validacion si se necesita cambiarla.
*/

class Empleado{
    private:
        std::string nombre;
        double salario;
        int edad;
        std::string contrasena;

    public:
        Empleado(std::string n, double s, int e, std::string c): nombre{n}, contrasena{c}{
            salario = (s >= 0) ? s : 0;
            edad = (e >= 18 && e <= 120) ? e : 18;
        }

        std::string getNombre() const{
            return nombre;
        }

        double getSalario() const{
            return salario;
        }

        int getEdad() const{
            return edad;
        }

        void setNombre(std::string n){
            nombre = n;
        }

        void setSalario(double s){
            if(s >= 0) salario = s;
            else std::cout<<"Salario invalido.\n";
        }

        void setEdad(int e){
            if(e >= 18 && e <= 120) edad = e;
            else std::cout<<"Edad invalida.\n";
        }

        void setContrasena(std::string c){
            if(c.length() >= 6) contrasena = c;
            else std::cout<<"Contrasena muy corta.\n";
        }

        void imprimir() const{
            std::cout<<"Nombre: "<<nombre<<", Edad: "<<edad<<", Salario: $"<<salario<<"\n";
        }
};

int main(){
    Empleado e1("Carlos", 800, 25, "clave123");

    e1.imprimir();
    e1.setSalario(-5000);
    e1.imprimir();
}
