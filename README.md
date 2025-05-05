# Calculadora de Expresiones Infijas

Este proyecto implementa una calculadora que convierte expresiones matemáticas de notación infija a notación posfija (también conocida como notación polaca inversa) y las evalúa.

## Características

- Conversión de expresiones infijas a posfijas
- Evaluación de expresiones posfijas
- Soporte para operaciones básicas (+, -, *, /)
- Manejo de precedencia de operadores
- Interfaz de línea de comandos interactiva

## Requisitos

- Compilador de C++ compatible con C++11 o superior
- CMake 3.10 o superior

## Compilación

Para compilar el proyecto, sigue estos pasos:

1. Crea un directorio de construcción:
```bash
mkdir build
cd build
```

2. Genera los archivos de construcción con CMake:
```bash
cmake ..
```

3. Compila el proyecto:
```bash
make
```

## Uso

Una vez compilado, puedes ejecutar el programa:

```bash
./calculadora
```

El programa te pedirá que ingreses una expresión matemática en notación infija (por ejemplo: "3+4*2"). Luego mostrará:
1. La expresión convertida a notación posfija
2. El resultado de la evaluación

## Estructura del Proyecto

- `main.cpp`: Contiene la función principal y la interfaz de usuario
- `Calculadora.h`: Define la clase Calculadora y sus métodos
- `Calculadora.cpp`: Implementa la lógica de conversión y evaluación
- `Pila.h`: Implementa una estructura de datos pila genérica
- `CMakeLists.txt`: Archivo de configuración para CMake

## Ejemplos de Uso

Entrada: `3+4*2`
- Notación posfija: `342*+`
- Resultado: `11`

Entrada: `(3+4)*2`
- Notación posfija: `34+2*`
- Resultado: `14`