#include <iostream>

using namespace std;

void obterNotaJurado(float &nota);
float encontrarMenor(float notas[5], int tamanho);
float encontrarMaior(float notas[5], int tamanho);
void calcularNotaFinal(float notas[5], int tamanho);

int main() {
    const int numJurados = 5;
    float notas[numJurados];

    for (int i = 0; i < numJurados; i++) {
        cout << "Informe a nota do jurado " << (i + 1) << ": ";
        obterNotaJurado(notas[i]);
    }

    calcularNotaFinal(notas, numJurados);

    return 0;
}


void obterNotaJurado(float &nota) {
    do {
        cin >> nota;
        if (nota < 0 || nota > 10) {
            cout << "\nNota Invalida! Digite novamente.\n";
        }
    } while (nota < 0 || nota > 10);
}

float encontrarMenor(float notas[5], int tamanho) {
    float menor = notas[0];
    for (int i = 1; i < tamanho; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}

float encontrarMaior(float notas[5], int tamanho) {
    float maior = notas[0];
    for (int i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

void calcularNotaFinal(float notas[5], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    float menor = encontrarMenor(notas, tamanho);
    float maior = encontrarMaior(notas, tamanho);

    float media = (soma - menor - maior) / (tamanho - 2);
    cout << "\nA nota do competidor é: " << media << endl;
}

