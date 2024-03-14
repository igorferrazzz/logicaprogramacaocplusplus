/*joguinho da auloa 09 ainda
*/

#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
#include <math.h>
#include <random>

using std::cout; using std::setlocale; using std::cin; using std::getline;
using std::endl; using std::string; using namespace std; using std::rand;

int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    int vida;
    int dano;
    int x;
    string jogardado;
    string flecha;
    srand(time(0));
    dano = rand() % 12 + 1;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 20);
    int numb = dis(gen);
    cout << "jogue o dado Zyn, se o valor for maior que ou igual a 15 você o acerta com seu arco magico";
    cin >> jogardado;
    getline(cin, jogardado);
    cout << "o numero tirado foi" << numb << "\n";
    if (numb < 15) {
        cout << "você não acertou""\n";
    }
    else if (numb >= 15 && numb <= 19) {
        cout << "você acertou";
    }
}
    


    

