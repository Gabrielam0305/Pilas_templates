#include <iostream>
#include <locale>
#include "Tipos.h"
#include "MiClase.h"

int main() {
    Tipos<double>(1.1, 1.1, "doblePila", 5);
    Tipos<int>(1, 1, "intPila", 10);
    Tipos<std::string>("C++", "", "stringPila", 10);
    MiClase myClass = MiClase(" ");
    Tipos<MiClase>(myClass, myClass, "mcPila", 10);
    std::cout << std::endl;
    return 0;
}
