/*jogo par ou impar*/

#include <iostream>
#include <string>
#include <locale>

int main()
{
    int escolhaUsuario, numeroAleatorio;

    
    std::srand(std::time(nullptr));

    
    std::cout << "Escolha (0) para par ou (1) para impar: ";
    std::cin >> escolhaUsuario;

    
    numeroAleatorio = std::rand() % 10 + 1;

    
    int soma = escolhaUsuario + numeroAleatorio;
    std::cout << "O numero aleatorio gerado foi: " << numeroAleatorio << std::endl;
    std::cout << "A soma dos numeros eh: " << soma << std::endl;

    if (soma % 2 == 0) {
        std::cout << "A soma dos numeros eh par." << std::endl;
        if (escolhaUsuario == 0) {
            std::cout << "Voce ganhou!" << std::endl;
        }
        else {
            std::cout << "Voce perdeu!" << std::endl;
        }
    }
    else {
        std::cout << "A soma dos numeros eh impar." << std::endl;
        if (escolhaUsuario == 1) {
            std::cout << "Voce ganhou!" << std::endl;
        }
        else {
            std::cout << "Voce perdeu!" << std::endl;
        }
    }

    return 0;
}
