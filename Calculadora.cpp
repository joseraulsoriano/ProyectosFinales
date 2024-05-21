// Calculadora.cpp
#include "Calculadora.h"

int Calculadora::precedencia(char operador) {
    switch (operador) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return -1;
    }
}

std::string Calculadora::infijaAPosfija(const std::string& infija) {
    std::string posfija;
    for (char c : infija) {
        if (std::isdigit(c)) {
            posfija += c;
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            while (!pilaOperadores.isEmpty() && precedencia(c) <= precedencia(pilaOperadores.top())) {
                posfija += pilaOperadores.top();
                pilaOperadores.pop();
            }
            pilaOperadores.push(c);
        }
    }

    while (!pilaOperadores.isEmpty()) {
        posfija += pilaOperadores.top();
        pilaOperadores.pop();
    }

    return posfija;
}

int Calculadora::evaluarPosfija(const std::string& posfija) {
    for (char c : posfija) {
        if (std::isdigit(c)) {
            pilaOperandos.push(c - '0');
        } else {
            int op2 = pilaOperandos.top(); pilaOperandos.pop();
            int op1 = pilaOperandos.top(); pilaOperandos.pop();

            switch (c) {
                case '+': pilaOperandos.push(op1 + op2); break;
                case '-': pilaOperandos.push(op1 - op2); break;
                case '*': pilaOperandos.push(op1 * op2); break;
                case '/': pilaOperandos.push(op1 / op2); break;
            }
        }
    }

    return pilaOperandos.top();
}