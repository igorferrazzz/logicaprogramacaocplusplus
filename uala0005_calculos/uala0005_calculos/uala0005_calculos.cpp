/*22/02/24
senai
exercicio de soma*/



#include <iostream>
#include <locale>
#include <string>
#include <math.h>
using std::cout; using std::cin; using std::locale; using std::getline;
int main()
{
	setlocale(LC_ALL, "pt-BR.UTF-8");
	float n1, n2;
	cout << "Olá seja bem vindo so programa de soma\n";
	cout << "digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	double soma = n1 + n2;
	double div = n1 / n2;
	double multi = n1 * n2;
	cout << "A soma: " << n1 << "+" << n2 << "=" << soma << "\n"
			"Divisão: " << n1 << "/" << n2 << "=" << div << "\n"
			"Multiplicação: " << n1 << "x" << n2 << "=" << multi << "\n";


}
