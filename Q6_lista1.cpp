#include <iostream>
#include <iomanip> // Para std::fixed e std::setprecision

using namespace std;

// Função para solicitar o preço da tinta
double solicitarPrecoTinta() {
    double preco_tinta;
    do {
        cout << "Informe o valor por litro da tinta (mínimo R$10): ";
        cin >> preco_tinta;
    } while (preco_tinta < 10);
    return preco_tinta;
}

// Função para solicitar a quantidade de cômodos
int solicitarQuantidadeComodos() {
    int comodos;
    do {
        cout << "\nInforme a quantidade de cômodos que deseja pintar (entre 1 e 20): ";
        cin >> comodos;
    } while (comodos < 1 || comodos > 20);
    return comodos;
}

// Função para solicitar a metragem de cada cômodo
void solicitarMetrosComodo(int comodos, double metros[]) {
    for (int i = 0; i < comodos; i++) {
        do {
            cout << "Informe quantos metros quadrados tem o cômodo " << (i + 1) << ": ";
            cin >> metros[i];
        } while (metros[i] < 0);
    }
}

// Função para calcular a quantidade de tinta necessária, tempo e custos
void calcularValores(int comodos, double metros[], double preco_tinta, double &quantidadeDeTinta, double &tempo, double &total_a_pagar, double &tinta_total, double &custo_total) {
    double total_metros = 0.0;
    
    // Calcula o total de metros quadrados
    for (int i = 0; i < comodos; i++) {
        total_metros += metros[i];
    }
    
    // Calcula a quantidade de tinta necessária
    quantidadeDeTinta = total_metros / 10;
    
    // Calcula o tempo de trabalho
    tempo = quantidadeDeTinta * 8;
    
    // Calcula o custo do trabalho
    total_a_pagar = tempo * 25;
    
    // Calcula o custo da tinta
    tinta_total = quantidadeDeTinta * preco_tinta;
    
    // Calcula o custo total
    custo_total = tinta_total + total_a_pagar;
}

// Função para exibir os resultados
void exibirResultados(double quantidadeDeTinta, double tempo, double tinta_total, double total_a_pagar, double custo_total) {
    cout << fixed << setprecision(2); // Define a precisão para valores monetários
    
    cout << "\n\nA quantidade de litros de tinta necessária é de: " << quantidadeDeTinta << " litros";
    cout << "\nAs horas de trabalho necessárias são: " << tempo << " horas";
    cout << "\nO custo da tinta: R$ " << tinta_total;
    cout << "\nO custo do trabalho: R$ " << total_a_pagar;
    cout << "\nO custo total do serviço: R$ " << custo_total;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int comodos;
    double metros[20];
    double preco_tinta, quantidadeDeTinta, tempo, total_a_pagar, tinta_total, custo_total;

    preco_tinta = solicitarPrecoTinta();
    comodos = solicitarQuantidadeComodos();
    solicitarMetrosComodo(comodos, metros);
    calcularValores(comodos, metros, preco_tinta, quantidadeDeTinta, tempo, total_a_pagar, tinta_total, custo_total);
    exibirResultados(quantidadeDeTinta, tempo, tinta_total, total_a_pagar, custo_total);

    return 0;
}

