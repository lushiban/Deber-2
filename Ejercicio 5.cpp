#include <iostream>
#include <iostream>

class Estudiante{
	public:
		std::string nombre;
		double nota;
		
		Estudiante(std::string nom, double n):nombre{nom}, nota{n>=0 ? n : 0}{}
		
		void imprimir(){
			std::cout<<nombre<<" : "<<nota<<"\n";
		}
		
		bool aprobado(){
			return (nota>=60);
		}
};

int main(){
	Estudiante lista[4] = {
		Estudiante("Ana",85),
		Estudiante("Luis",45),
		Estudiante("Carla",92),
		Estudiante("Pedro",58)
	};
	
	std::cout<<" === Aprobados ===\n";
	for(int i{0};i<4;i++){
		if(lista[i].aprobado() == true) lista[i].imprimir();
	}
	
	std::cout<<" === Reprobados ===\n";

	for(int i{0};i<4;i++){
		if(lista[i].aprobado() == false) lista[i].imprimir();
	}
	
}