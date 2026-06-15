#include <iostream>
#include <cmath>
class Punto{
	public:
		double x, y;
		Punto(double n1, double n2):x{n1},y{n2}{}
		
		void imprimir(){
			std::cout<<"("<<x<<", "<<y<<")\n";
		}
		
    	double distancia(Punto segundo){
			return sqrt((x-segundo.x)*(x-segundo.x) + (y-segundo.y)*(y-segundo.y));
      	}
    	Punto puntoMedio(Punto segundo){
      		return Punto((x+segundo.x)/2, (y+segundo.y)/2);
		}
};

int main(){
	Punto p1(3,4);
	Punto p2(7,1);
	Punto medio(p1.puntoMedio(p2));
	
	std::cout<<"P1: ";
	p1.imprimir();
	std::cout<<"P2: ";
	p2.imprimir();
	
	std::cout<<"Distancia: "<<p1.distancia(p2)<<'\n';
	
	std::cout<<"Punto medio: ";
	medio.imprimir();
}