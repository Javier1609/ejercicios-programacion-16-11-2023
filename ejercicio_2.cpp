// main.cpp
#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
#include "rombo.cpp"
#include "rectangulo.cpp"

int main() {

    double baseTriangulo = 5, alturaTriangulo = 2;
    double radioCirculo = 8;
    double diagonalMayorRombo = 7, diagonalMenorRombo = 5;
    double baseRectangulo = 20, alturaRectangulo = 5;


    std::cout << "area del triangulo: " << Geometria::calcularAreaTriangulo(baseTriangulo, alturaTriangulo) << std::endl;
    std::cout << "area del circulo: " << Geometria::calcularAreaCirculo(radioCirculo) << std::endl;
    std::cout << "area del rombo: " << Geometria::calcularAreaRombo(diagonalMayorRombo, diagonalMenorRombo) << std::endl;
    std::cout << "area del rectangulo: " << Geometria::calcularAreaRectangulo(baseRectangulo, alturaRectangulo) << std::endl;

    return 0;
}
