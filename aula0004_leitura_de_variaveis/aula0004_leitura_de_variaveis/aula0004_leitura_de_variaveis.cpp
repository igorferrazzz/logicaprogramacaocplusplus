/*aula 05 
senai
22/02/24
leitura de variaveis*/

#include <iostream>
#include <string>
#include <locale>
using std::cout; using std::endl; using std::setlocale; using std::string;
using std::cin; using std::getline;
void main()

{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    string nome;
    cout << "Olá bom dia digite o seu nome: \n";
    getline(cin, nome);
    cout << " Olá "  << nome << " bom dia\n";
    
    string idade;
    cout << "qual sua idade? \n";
    cin >> idade;

    string endereco;
    cout << "onde voce mora? \n";
    cin >> endereco;

    string sexualidade;
    cout << "qual seu sexo? \n";
    cin >> sexualidade;

    

    
        


}



