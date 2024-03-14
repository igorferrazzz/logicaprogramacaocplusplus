// aula0010_passo_de_repeticao.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include <locale>
#include <math.h>
#include <iomanip>
#include <random>
using std::cout; using std::setlocale; using std::cin; using std::getline;
using std::endl; using std::string; using namespace std;

int main()
{
    setlocale(LC_ALL, "pt-BR. UTF.8");
    
    int n1, n2, n3, n4;
    cout << "Digite suas notas: \n";
    cin >> n1 >> n2 >> n3 >> n4; 
    int soma = n1 + n2 + n3 + n4;
    double media = static_cast<double>(soma) / 4; 
    cout << "Essa e sua media: " << media << endl;

    if (media < 5) {
        cout << "Sua media e ruim.\n";
    }
    else if (media >= 5 && media < 7) {
        cout << "Sua media e mediana.\n";
    }
    else if (media >= 7 && media <= 10) {
        cout << "Sua media e exemplar.\n";
    }
    else {
        cout << "Media invalida.\n";
    }

    return 0;


}
