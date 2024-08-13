#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int c = 0;
    char nome[50], menor[50];
    cout << "Digite o nome: ";
    cin.getline(nome, sizeof(nome));
    for(c = 0; c < 50; c++){
        menor[c] = nome[c];
    }
    while(nome[0] != '\0'){
        if(strcmp(menor, nome) < 0){
            for(c = 0; c < 50; c++){
                menor[c] = nome[c];
            }
        }
        cout << "Digite o nome: ";
        cin.getline(nome, sizeof(nome));
    }
    c = 0;
    cout << "Nome de pessoa lexicograficamente menor: ";
    while(menor[c] != '\0'){
        cout << menor[c];
        c++;
    }
    return 0;
}
