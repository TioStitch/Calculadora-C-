#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string prefixo = "[Calculadora] ";
    cout<<prefixo << "Insira o primeiro número: \n";

    int primeiro_numero;
    std::cin >> primeiro_numero;
    
    cout<<prefixo << "Primeiro número: " << primeiro_numero << "\n";
    
    cout<<prefixo << "Insira o segundo número: \n";

    int segundo_numero;
    std::cin >> segundo_numero;

    cout<<prefixo << "Segundo número: " << segundo_numero << "\n";
    
    cout<<prefixo << "Insira o operador: \n";
    cout<<prefixo << "\n 1. +\n 2. -\n 3. *\n 4. /\n 5. %\n";
    int operation;
    std::cin >> operation;
    switch (operation) {
        case 1:
            cout<<prefixo << "Resultado: " << primeiro_numero + segundo_numero;
        break;
        case 2:
            cout<<prefixo << "Resultado: " << primeiro_numero - segundo_numero;
        break;
        case 3:
            cout<<prefixo << "Resultado: " << primeiro_numero * segundo_numero;
        break;
        case 4:
            cout<<prefixo << "Resultado: " << primeiro_numero / segundo_numero;
        break;
        case 5:
            cout<<prefixo << "Resultado: " << primeiro_numero % segundo_numero;
        break;
    }

    return 0;
}
