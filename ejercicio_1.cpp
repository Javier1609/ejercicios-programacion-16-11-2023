#include<iostream>
using namespace std;

namespace Matematicas {

    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(8, 4) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(8, 4) << std::endl;
    return 0;
}