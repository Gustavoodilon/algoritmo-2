/*. Escreva um programa que determine qual das quatro filiais de uma empresa (Nordeste,
Sudeste, Noroeste e Sudoeste) teve as maiores vendas em um trimestre. Ele deve incluir
as seguintes duas fun¸c˜oes, que s˜ao chamadas pela fun¸c˜ao main:

• double obterVendas(...) recebe o nome de uma filial. Ele solicita ao usu´ario o
valo total de vendas trimestrais da filial, valida a entrada e, em seguida, a retorna.
Esta fun¸c˜ao deve ser chamada uma vez para cada filial.

• void encontrarMaior(...) recebe os quatro totais de vendas. Ela determina qual
´e o maior e imprime o nome da divis˜ao com o maior faturamento, junto com seu
valor de vendas.

Valida¸c˜ao de Entrada: N˜ao aceite valores em menores que 0,00.*/

#include <iostream>
#include <string>
#include <cmath> 

using namespace std;


double obterVendas(const string& nomeFilial) {
    double vendas;
    do {
        cout << "Informe o total de vendas trimestrais para a filial " << nomeFilial << ": ";
        cin >> vendas;
        if (vendas < 0) {
            cout << "Valor inválido. As vendas não podem ser negativas. Tente novamente." << endl;
        }
    } while (vendas < 0);
    return vendas;
}

// Função para encontrar e exibir a filial com o maior faturamento
void encontrarMaior(double vendasNordeste, double vendasSudeste, double vendasNoroeste, double vendasSudoeste) {
    double maiorVendas = vendasNordeste;
    string filialComMaiorVendas = "Nordeste";

    if (vendasSudeste > maiorVendas) {
        maiorVendas = vendasSudeste;
        filialComMaiorVendas = "Sudeste";
    }
    if (vendasNoroeste > maiorVendas) {
        maiorVendas = vendasNoroeste;
        filialComMaiorVendas = "Noroeste";
    }
    if (vendasSudoeste > maiorVendas) {
        maiorVendas = vendasSudoeste;
        filialComMaiorVendas = "Sudoeste";
    }

    int maiorVendasInteiro = static_cast<int>(maiorVendas);
    int maiorVendasDecimal = static_cast<int>(round((maiorVendas - maiorVendasInteiro) * 100));

    cout << "A filial com o maior faturamento é " << filialComMaiorVendas
         << " com R$ " << maiorVendasInteiro << ',' << (maiorVendasDecimal < 10 ? "0" : "") << maiorVendasDecimal << endl;
}

int main() {
    double vendasNordeste = obterVendas("Nordeste");
    double vendasSudeste = obterVendas("Sudeste");
    double vendasNoroeste = obterVendas("Noroeste");
    double vendasSudoeste = obterVendas("Sudoeste");

    encontrarMaior(vendasNordeste, vendasSudeste, vendasNoroeste, vendasSudoeste);

    return 0;
}
