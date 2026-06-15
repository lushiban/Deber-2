#include <iostream>

class Temperatura {
public:
    double celsius;
	Temperatura(double c) : celsius{c} {}

    double getCelsius();
    double getFahrenheit();
    double getKelvin();
    void imprimir();
};

int main() {
    Temperatura t1(100.0);
    t1.imprimir();
}



double Temperatura::getCelsius() {
    return celsius;
}

double Temperatura::getFahrenheit() {
    return celsius * 9 / 5 + 32;
}

double Temperatura::getKelvin() {
    return celsius + 273.15;
}

void Temperatura::imprimir() {
    std::cout << "Celsius   : " << getCelsius() << "\n";
    std::cout << "Fahrenheit: " << getFahrenheit() << "\n";
    std::cout << "Kelvin    : " << getKelvin() << "\n";
}