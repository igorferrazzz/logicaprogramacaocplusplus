/*29/02
aula impar par
senai
*/

#include <iostream>
#include <string>
#include <locale>
using std::cout; using std::endl; using std::cin; using std::setlocale;
using std::getline;

int main()
{
    int numero;
 
    setlocale(LC_ALL, "pt-BR.UTF-8");
    
    cout << "digite um numero inteiro: \n";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << " O numero " << numero << " e par." << endl;
    } else {
        cout << " o numero " << numero << " e impar " << endl;
    }
    return 0;
}
