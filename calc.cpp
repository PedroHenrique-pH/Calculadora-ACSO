#include <iostream>
#include "calc.hpp"

    double num1, num2, resultado;

    int soma(double num1, double num2) {
        resultado = num1 + num2;
        std::cout << "resultado: " << resultado;
        return 0;
    }

    int subtracao(double num1, double num2) {
        resultado = num1 - num2;
        std::cout << "resultado: " << resultado;
        return 0;
    }

    int multiplicacao(double num1, double num2) {
        resultado = num1 * num2;
        std::cout << "resultado: " << resultado;
        return 0;
    }

    int divisao(double num1, double num2) {
        resultado = num1 / num2;
        std::cout << "resultado: " << resultado;
        return 0;
    }