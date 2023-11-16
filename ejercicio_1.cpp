#include<iostream>
using namespace std;

namespace Matematicas {

    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }

    int multiplicacion(int a, int b) {
        return a * b;
    }

    int division(int a, int b) {
        return a / b;
    }

    int modulo(int a, int b) {
        return a % b;
    }

    int potencia(int a, int b) {
        return a ^ b;
    }

    int raizCuadrada(int a) {
        return a ^ 1 / 2;
    }

    int raizCubica(int a) {
        return a ^ 1 / 3;
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(8, 4) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(8, 4) << std::endl;
    std::cout << "Multiplicacion: " << Matematicas::multiplicacion(8, 4) << std::endl;
    std::cout << "Division: " << Matematicas::division(8, 4) << std::endl;
    std::cout << "Modulo: " << Matematicas::modulo(8, 4) << std::endl;
    std::cout << "Potencia: " << Matematicas::potencia(8, 4) << std::endl;
    std::cout << "Raiz cuadrada: " << Matematicas::raizCuadrada(5) << std::endl;
    std::cout << "Raiz cubica: " << Matematicas::raizCubica(10) << std::endl;
    return 0;
}

