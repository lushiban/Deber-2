#include <iostream>

class Circulo{
	public:
		
		double radio;
		Circulo(double r){
			radio = r;
		}
		
		double calcularArea(){
			return 3.141592 * radio * radio;
		}
		double calcularPerimetro(){
			return 2 * 3.141592 * radio;
		}
		void imprimir(){
			std::cout<<"Radio: "<<radio;
			std::cout<<"\nArea: "<<calcularArea();
			std::cout<<"\nPerimetro: "<<calcularPerimetro()<<'\n';
		}
};

int main(){
	Circulo cir1(5);
	cir1.imprimir();
	
	Circulo cir2(3);
	cir2.imprimir();
	
}