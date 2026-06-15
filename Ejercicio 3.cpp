#include <iostream>
#include <cmath>


class Triangulo{
	public:
		double lado1, lado2, lado3;
		
		Triangulo(double l1,double l2,double l3):
		lado1{l1>=0 ? l1 : 0},lado2{l2>=0 ? l2 : 0},lado3{l3>=0 ? l3 : 0} {};
		
		double calcularPerimetro(){
			return lado1 +lado2+lado3;
		}
		
		double calcularArea(){
			double s = (calcularPerimetro())/2;
			return (sqrt(s*(s-lado1)*(s-lado2)*(s-lado3)));
		}
		
		bool esEquilatero(){
			return (lado1 == lado2 && lado2 == lado3);
		}
		
		bool esRectangulo(){
			double a,b,c;
			if(lado1 > lado2 && lado1 > lado3) {c = lado1; a = lado2; b = lado3;}
			else if(lado2 > lado1 && lado2 > lado3) {c = lado2; a = lado1; b = lado3;}
			else {c = lado3;a = lado2; b = lado1;};
			
			
			
			return (c * c ==  (a*a + b*b));
		}
		
		
		void imprimir(){
	    std::cout.setf(std::ios::fixed);
    	std::cout.precision(2);
 		std::cout << "Lados: " << lado1 << ", " << lado2 << ", " << lado3 << "\n";
    	std::cout << "Perimetro: " << calcularPerimetro() << "\n";
    	std::cout << "Area: " << calcularArea() << "\n";
    	std::cout << "Equilatero: " << (esEquilatero() ? "SI" : "NO") << "\n";
    	std::cout << "Rectangulo: " << (esRectangulo() ? "SI" : "NO") << "\n";
}
		
};

int main(){
	Triangulo t(3,4,5);
	
	t.imprimir();
	
}