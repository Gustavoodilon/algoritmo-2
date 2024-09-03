#include <iostream>

using namespace std;

void solicitarDadosProduto(double &preco, int &quantidade);
double calcularValorTotal(double preco, int quantidade);
double aplicarDesconto(double valorTotal, double limite, double percentual);

int main(){
    double preco;
    int quantidade;
    const double limite = 600.0;
    const double percentual = 15.0;
    double valorTotal;

    solicitarDadosProduto(preco, quantidade);

    valorTotal = calcularValorTotal(preco, quantidade);

    double valorComDesconto = aplicarDesconto(valorTotal, limite, percentual);

    cout << "\n\nO valor total é de: R$" << valorTotal;
    cout << "\nO valor total com desconto é de: R$" << valorComDesconto;

    return 0;
}


void solicitarDadosProduto(double &preco, int &quantidade){
    do{
        cout << "\nInforme o preço unitario do produto: ";
    cin >> preco;
    if(preco < 0){
        cout << "\nPreço invalido! digite novamente o preco";
    }
    }while(preco < 0);
    do{
    cout << "\nInforme a quantidade do produto em unidades: ";
    cin >> quantidade;
    if(quantidade < 1){
        cout << "\nQuantiade invalida! Digite um número maior do que 0.";
    }
    
    }while(quantidade < 1);
}

double calcularValorTotal(double preco, int quantidade){
    return preco * quantidade;
}

double aplicarDesconto(double valorTotal, double limite, double percentual){
    if(valorTotal >= limite){
        double desconto = valorTotal * (percentual / 100);
        valorTotal = valorTotal - desconto;
    }
    return valorTotal;
}