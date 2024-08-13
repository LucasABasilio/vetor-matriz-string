#include <iostream>

using namespace std;

int tamanho(){
    int n = 11;
    while(n > 10){
        cout << "Indique o numero de valores, deve ser menor que 10: ";
        cin >> n;
        if(n > 10){
            cout << "Numero de valores deve ser menor que 10!" << endl;
        }
    }
    return n;
}

int main()
{
    int n;
    n = tamanho();
    int i, c = 0, vetor[n], soma = 0, maior;

    for(i = 0; i < n; i++){
        cout << "Digite um valor: ";
        cin >> vetor[i];
        if((i%2 != 0) && (vetor[i]%2 == 0)){
            soma += vetor[i];
        }
    }
    while(c < n){
        maior = vetor[c];
        for(i = c; i < n; i++){
            if(maior < vetor[i]){
                maior = vetor[i];
                vetor[i] = vetor[c];
                vetor[c] = maior;
            }
        }
        c++;
    }
    for(i = 0; i < n; i++){
        cout << vetor[i] << endl;
    }
    cout << "Os dois maiores valores sao: " << vetor[0] << " e " << vetor[1] << endl;
    cout << "Soma dos valores pares em indices impares: " << soma;
    return 0;
}
