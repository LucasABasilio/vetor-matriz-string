#include <iostream>

using namespace std;

int main()
{
    int vetor[5], i, soma = 0;
    for(i = 0; i < 5; i++){
        cout << "Digite o valor do indice " << i << ": ";
        cin >> vetor[i];
        if(vetor[i]%2 != 0){
            soma += vetor[i];
        }
    }

    cout << "\nSoma dos valores impares: " << soma << endl;
    return 0;
}
