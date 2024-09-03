#include <iostream>

using namespace std;

int main(){

    const int tamanho = 10;
    int valores[tamanho];
    double menor = 99999999, maior = 0;


    cout << "Insira 10 valores: " << endl;
    for(int i = 0; i < tamanho; i++){
        cout << "Valor " << (i + 1) << ":\n ";
        cin >> valores[i];
        cout << endl;

        if(valores[i] > maior){
            maior = valores[i];
        }
        if(valores[i] < menor){
            menor = valores[i];
        }
    }

    cout << "\n\nO maior valor digitado é: " << maior;
    cout << "\nO menor valor digitado é: " << menor;

    return 0;
}