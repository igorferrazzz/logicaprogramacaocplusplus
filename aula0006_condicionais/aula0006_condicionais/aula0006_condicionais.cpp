// aula0006_condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include <locale>
using std::cout; using std::endl; using std::cin; using std::setlocale; 
using std::getline; 



int main()
{
	setlocale(LC_ALL, "pt-BR. UTF-8");
    float nota1, nota2, nota3, nota4;
    cout << "digite sua nota1: \n";
    cin >> nota1;
    cout << "digite sua nota2 : \n";
    cin >> nota2;
    cout << "digite sua nota3: \n";
    cin >> nota3;
    cout << "digite sua nota4: \n";
    cin >> nota4;
    double soma = nota1 + nota2 + nota3 + nota4;
    cout << "a soma das suas notas: " << nota1 << " + " << nota2 << " + " << nota3 << " + " << nota4 << " = " << soma << "\n";
    int var2 = 4;
    double media = soma / var2;
    
    cout << "a sua media foi: " << soma << "/" << var2 << " = " << media << "\n";
    
    if (media < 5.0) {
        cout << "Sua media foi ruim.\n";
    }
    else if (media >= 5.0 && media < 7.0) {
        cout << "Sua media foi mediana.\n";
    }
    else if (media >= 7.0 && media < 9.0) {
        cout << "Sua media foi boa.\n";
    }
    else {
        cout << "Sua media foi muito boa.\n";
    }

    return 0;
    
}
	
		
	

