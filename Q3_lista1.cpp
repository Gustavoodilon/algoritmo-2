/*Escreva um programa que pe¸ca ao usu´ario para inserir o custo de atacado de um item e a
porcentagem de margem de lucro. Em seguida, ele deve exibir o pre¸co de varejo do item.
Por exemplo:
1
• Se o custo de atacado de um item ´e 5,00 e a porcentagem de margem de lucro ´e
100%, ent˜ao o pre¸co de varejo do item ´e 10,00.
• Se o custo de atacado de um item ´e 5,00 e a porcentagem de margem de lucro ´e 50%,
ent˜ao o pre¸co de varejo do item ´e 7,50.
O programa deve ter uma fun¸c˜ao chamada calcularPrecoVarejo que recebe o custo
de atacado e a porcentagem de margem de lucro como argumentos e retorna o pre¸co de
varejo do item.
Valida¸c˜ao de Entrada: N˜ao aceite valores negativos para o custo de atacado do item
ou para a porcentagem de margem de lucro.*/

#include <iostream>

using namespace std;

double calcularPrecoVarejo(double margem_lucro, double Valor_produto);

int main(){
    setlocale(LC_ALL, "portuguese");

    double Valor_final = 0.0;
    double margem_lucro, Valor_produto;


    do
    {
        cout << "Informe o valor do item: ";
        cin >> Valor_produto;
        if (Valor_produto < 0){
            cout <<"\n\nNumero invalido, digite novamente...\n \n";
        }
    } while (Valor_produto < 0);

    do
    {
        cout << "\n\nQual a margem de lucro em porcentagem que deseja lucrar: ";
        cin >> margem_lucro;
        if (margem_lucro < 0){
            cout <<"\n\nNumero invalido, digite novamente...\n \n";
        }
    } while (margem_lucro < 0);

    Valor_final = calcularPrecoVarejo(margem_lucro, Valor_produto);

    cout << "\nO valor do produto com a porcentagem é: R$ " << Valor_final << "\n\n";

    return 0;
}

double calcularPrecoVarejo(double margem_lucro, double Valor_produto)
{
    double lucro = (Valor_produto * margem_lucro / 100);
    return Valor_produto + lucro;
}
