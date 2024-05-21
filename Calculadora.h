// Calculadora.h
#ifndef UNTITLED2_CALCULADORA_H
#define UNTITLED2_CALCULADORA_H

#include "Pila.h"
#include <string>
#include <cctype>
#include <cmath>
#include <stdexcept>
#include <sstream>

class Calculadora {
private:
    Pila<char> pilaOperadores;
    Pila<int> pilaOperandos;

    int precedencia(char operador);

public:
    std::string infijaAPosfija(const std::string& infija);
    int evaluarPosfija(const std::string& posfija);
};

#endif //UNTITLED2_CALCULADORA_H