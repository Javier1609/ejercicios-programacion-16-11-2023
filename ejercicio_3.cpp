
#include <iostream>
namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() {
            return 3.14 * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
    };
}

int main() {
    Geometria::Circulo r(10.678);
    std::cout << "Area: " << r.calcularArea() << std::endl;
    std::cout << "Perimetro: " << r.calcularPerimetro() << std::endl;
    std::cout << "Area del semicirculo: " << r.calcularArea() / 2 << std::endl;
    std:: cout << "Perimetro del semicirculo: " << r.calcularPerimetro() / 2 << std::endl;
    return 0;
}