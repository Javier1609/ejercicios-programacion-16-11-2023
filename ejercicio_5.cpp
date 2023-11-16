#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {

    std::cout << "Uso de vector:\n";
    std::vector<int> myVector = {1, 2, 3};
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << "\n\n";


    std::cout << "Uso de map:\n";
    std::map<std::string, int> myMap = {{"uno", 1}, {"dos", 2}, {"tres", 3}};
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    std::cout << "\n";



    std::cout << "Uso de set:\n";
    std::set<int> mySet = {3, 1, 2};
    for (const auto& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << "\n";

    return 0;
}
