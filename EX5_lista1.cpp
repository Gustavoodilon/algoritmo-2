#include <iostream>

using namespace std;

bool ehPrimo(int numero);

int main() {
    int inicio, fim;

    cout << "Digite o intervalo (inicio e fim): ";
    cin >> inicio >> fim;

    cout << "Números primos entre " << inicio << " e " << fim << ":\n";
    
    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            cout << i << " | ";
        }
    }

    return 0;
}

bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero == 2 || numero == 3) {
        return true;
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
