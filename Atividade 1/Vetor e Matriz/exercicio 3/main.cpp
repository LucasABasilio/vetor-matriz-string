#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double notas[5], desvio[5], desvioquadrado[5], desviopadrao, variancia, media, soma = 0, somadesvio = 0;
    int i;
    for(i = 0; i < 5; i++){
        cout << "Informa a nota " << i+1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }
    media = soma / 5;
    for(i = 0; i < 5; i++){
        desvio[i] = notas[i] - media;
        desvioquadrado[i] = pow(desvio[i],2);
        somadesvio += desvioquadrado[i];
    }
    variancia = somadesvio / 5;
    desviopadrao = sqrt(variancia);

    cout << "Variancia: " << variancia << endl;
    cout << "Desvio padrao: " << desviopadrao << endl;
    return 0;
}
