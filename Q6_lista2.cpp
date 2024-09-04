#include <iostream>

using namespace std;

int main(){

    const int maximo = 7;
    int emp_id[maximo] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int horas[maximo];
    double valor_hora[maximo];
    double salarios[maximo];

    for(int i = 0; i < maximo ; i++){
        cout << "\n\nNúmero de identificação do funcionario " << (i +1)  << ": "<<emp_id[i];

        do{
            cout << "\nInforme a quantidade de horas trabalhadas do funcionario: ";
            cin >> horas[i];
            if(horas[i] < 0){
                cout << "\nHora invalida! Insira horario positivo";
        }
        }while(horas[i] < 0);
        
        do{
            cout << "\nInforme o valor que o funcionario ganhar por hora: ";
            cin >> valor_hora[i];
            if(valor_hora[i] < 80){
                cout << "\nValor do salário invalida! Insira o ganho por hora maior que 80";
        }
        }while(valor_hora[i] < 80);

        salarios[i] = horas[i] * valor_hora[i];
    }
    
    for(int i = 0; i < maximo; i++){
        cout << "\n\nNúmero de identificação do funcionario: " << (i + 1) << emp_id[i];
        cout << "\nO salário bruto do funcionario é: R$" << (i + 1) << salarios[i];
    }

    return 0;
}
