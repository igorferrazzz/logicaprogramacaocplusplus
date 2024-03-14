#include <locale>
#include <string>
#include <iostream>
#include <math.h>
using std::cout; using std::endl; using std::getline;
using std::cin; using std::string; using std::setlocale;

int main()
{
    double total, porc;
    setlocale(LC_ALL, "pt-BR.UTF-8");
    cout << "Digite o valor completo: \n";
    cin >> total;

    cout << "Digite a porcentagem: \n";
    cin >> porc;

    double resul = (porc / 100.0) * total;
    
    cout << "A porcentagem de " << porc << "% de " << total << " é: " << resul << "\n";

}
