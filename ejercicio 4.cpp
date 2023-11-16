#include <iostream>
namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
    namespace matematicas {
        const double pi = 3.14;
        double calcularAreaCirculo(double radio) {
           return pi * radio * radio;
        }
    }
    namespace quimica {
        const double c = 299792458;
        const double masaElectron = 9.10938356e-31;
        double calcularEnergia(double masa) {
            return masa * masaElectron * c * c;
        }



    }

}

int main() {
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;
    std::cout << "Area del circulo: " << Ciencia::matematicas::calcularAreaCirculo(30) << std::endl;
    std::cout << "Energia: " << Ciencia::quimica::calcularEnergia(10) << std::endl;

}