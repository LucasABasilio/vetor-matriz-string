#include <iostream>

using namespace std;

int main()
{
    int quantidade[5], i;
    double precoproduto, precototal = 0, precounitario[5];
    for(i = 0; i < 5; i++){
        cout << "Digite a quantidade do produto de codigo " << i << ": ";
        cin >> quantidade[i];
        cout << "Digite o preco do produto de codigo " << i << ": ";
        cin >> precounitario[i];
        precoproduto = quantidade[i] * precounitario[i];
        cout << "Preco total do produto de codigo " << i << ": " << precoproduto << endl;
        precototal += precoproduto;
    }
    cout << "Preco total: " << precototal << endl;
    return 0;
}
