#ifndef PILA_H
#define PILA_H

#include <vector>
#include <stdexcept>

template<typename T>
class Pila {
private:
    std::vector<T> elementos;

public:
    void push(T elemento) {
        elementos.push_back(elemento);
    }

    void pop() {
        if (!elementos.empty()) {
            elementos.pop_back();
        }
    }

    T top() {
        if (!elementos.empty()) {
            return elementos.back();
        }
        throw std::out_of_range("Pila vacía");
    }

    bool isEmpty() {
        return elementos.empty();
    }
};

#endif //PILA_H