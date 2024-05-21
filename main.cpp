#include <iostream>
#include "Calculadora.h"usifn gnamespace std;


int main() {
    int opcion = 0;
    do {
        Calculadora calc;
        std::string expresion;
        std::cout << "Ingrese la expresión en notación infija: ";
        std::cin >> expresion;
        std::string expresionPosfija = calc.infijaAPosfija(expresion);
        std::cout << "Expresión en notación posfija: " << expresionPosfija << std::endl;
        std::cout << "Resultado de la evaluación: " << calc.evaluarPosfija(expresionPosfija) << std::endl;

        std::cout << "\n¿Qué desea hacer a continuación?\n";
        std::cout << "1. Volver a poner la expresión\n";
        std::cout << "2. Salir\n";
        std::cout << "Opción: ";
        std::cin >> opcion;
    } while (opcion == 1);

    return 0;
}