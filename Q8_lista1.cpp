#include <iostream>
#include <cmath>

using namespace std;

double valorPresente(double F, double r, double n){
    return F / pow((1 + r), n);
}

int main(){

    double F; // valor futuro desejado
    double r; // juros
    int n;   //numero de anos
    
    cout << "Informe a quantia que você deseja no futuro (F): R$";
    cin >> F;
    cout << "\nInforme a taxa de juros anual (r): ";
    cin >> r;
    cout << "\nDigite o numero de anos (n): ";
    cin >> n;

    r /= 100;
    double p = valorPresente(F, r, n);

    cout << "\n\nVocê precisa insvestir hoje: R$" << p << endl;

    return 0;
}