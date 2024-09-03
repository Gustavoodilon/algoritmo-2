#include <iostream>

using namespace std;

int main(){

    const int meses = 12;
    double chuva[meses];
    double totalchuva = 0.0;
    double maiorchuva = 0.0;
    double menorchuva = 9999999;
    int mesMenorChuva = 0;
    int mesMaiorChuva = 0;


    cout << "Digite a quantidade de chuva (em mm) para cada mes: \n";
    for(int i = 0; i < meses; i++){
        do{
            cout << "Mês " << (i +1) << ": ";
            cin >> chuva[i];
            if(chuva[i] < 0){
                cout << "Quantidade invalida! Insira um número positivo. \n";
        }
        }while(chuva[i] < 0);

        totalchuva += chuva[i];
    }

    for(int i = 0; i < meses; i++){
        if(chuva[i] >  maiorchuva){
            maiorchuva = chuva[i];
            mesMaiorChuva = i;
        }
        if(chuva[i] <  menorchuva){
            menorchuva = chuva[i];
            mesMenorChuva = i;
        }
    }

    double mediaMensal= totalchuva / meses;

    cout << "\n\nQuantidade total de chuva no ano " << totalchuva << "mm";
    cout << "\nMédia mensal de chuva: " << mediaMensal << "mm";
    cout << "\nMédia mensal de chuva: " << mediaMensal << "mm";
    cout << "\nMês com maior quantidade de chuva foi o: " << (mesMaiorChuva + 1) << " - " << maiorchuva << "mm";
    cout << "\nMês com menor quantidade de chuva foi o: " << (mesMenorChuva + 1) << " - " << menorchuva << "mm";


    return 0;
}