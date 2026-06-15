#include <iostream>

class Persona{
	public:
		std::string nombre;
		int edad;
		double altura;
		
		Persona(std::string n, int e, double a):
		nombre{n},edad{(e>=0)? e :0}, altura{(a>=0)? a :0} {}
		
		void imprimir(){
			std::cout<<"Nombre: "<<nombre<<", Edad: "<<edad<<" Altura: "<<altura<<"m\n";
			std::cout<<"Mayor de edad: "<<((esMayorDeEdad() == true)? "SI\n": "NO\n"); 
			std::cout<<saludar();
		}
		
    	bool esMayorDeEdad(){
    		return edad >= 18;
		}
		std::string saludar(){
			return ("Hola, soy "+nombre+" y tengo "+std::to_string(edad)+" anos.\n" );
		} 
		

		
	
};

int main(){
	Persona p1{"Eduardo",19,1.60};
	p1.imprimir();
	
	Persona p2{"Marcelo",12,1.47};
	p2.imprimir();
	
	Persona p3{"Estiven",38,1.87};
	p3.imprimir();
	
}