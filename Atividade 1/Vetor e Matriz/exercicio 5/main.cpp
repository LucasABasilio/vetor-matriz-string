#include <iostream>

using namespace std;

int main()
{
    int vetor1[10], vetor2[10], i;
    for(i = 0; i < 10; i++){
        cout << "Digite um valor: ";
        cin >> vetor1[i];
        if(i%2 != 0){
            vetor2[i] = vetor1[i] + 5;
        }
        else{
            vetor2[i] = vetor1[i] * 5;
        }
    }
    cout << "Vetor 1: ";
    for(i = 0; i < 10; i++){
        cout << vetor1[i] << " ";
    }
    cout << endl;
    cout << "Vetor 2: ";
    for(i = 0; i < 10; i++){
        cout << vetor2[i] << " ";
    }
    cout << endl;
    return 0;
}
