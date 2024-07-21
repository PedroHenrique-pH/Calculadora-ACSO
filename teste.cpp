#include <iostream>
#include "calc.hpp"

int main(){

    char operacao;
    double num1, num2, resultado;

    std::cout << "Digite a operacao desejada (+, -, * ou /)\n";
    std::cin >> operacao;

    if (operacao == '+' )
    {
        std::cout << "Digite o primeiro numero da operacao:\n";
        std::cin >> num1;
        
        std::cout << "Digite o segundo numero da operacao:\n";
        std::cin >> num2;

        soma(num1,num2);

    } else 
    
        if (operacao == '-' )
    {
        std::cout << "Digite o primeiro numero da operacao:\n";
        std::cin >> num1;
        
        std::cout << "Digite o segundo numero da operacao:\n";
        std::cin >> num2;

        subtracao(num1,num2); 
    } else 
    
        if (operacao == '*' )
    {
        std::cout << "Digite o primeiro numero da operacao:\n";
        std::cin >> num1;
        
        std::cout << "Digite o segundo numero da operacao:\n";
        std::cin >> num2;

        multiplicacao(num1,num2); 
    } else 
    
        if (operacao == '/' )
    {
        std::cout << "Digite o primeiro numero da operacao:\n";
        std::cin >> num1;
        
        std::cout << "Digite o segundo numero da operacao:\n";
        std::cin >> num2;
        if (num2 != 0)
        {
            divisao(num1,num2); 
        } else {
            std::cout << "\ndivisao invalida! (divisao por 0) \n";
            return 1;
        }
    }
    
    return 0;

}
