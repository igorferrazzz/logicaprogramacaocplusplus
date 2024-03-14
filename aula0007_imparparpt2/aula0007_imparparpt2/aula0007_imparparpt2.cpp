/*pt 2 da aula impar par
*/

#include <iostream>
#include <string>
#include <locale>
using std::cout; using std::endl; using std::cin; using std::setlocale;
using std::getline;

int main()
{

    float n1, n2;
    cout << "Ola, seja bem-vindo ao programa de soma.\n";
    cout << "Digite um numero: ";
    cin >> n1;
    cout << "Digite outro numero: ";
    cin >> n2;

    double soma = n1 + n2;
    cout << "A soma: " << n1 << " + " << n2 << " = " << soma << "\n";
        
    
    if (static_cast<int>(soma) % 2 == 0) {
        cout << "A soma e par." << endl;
    }
    else {
        cout << "A soma e impar." << endl;
    }

    return 0;
}

