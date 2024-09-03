/*9. Um estudante deseja calcular sua m´edia final em uma disciplina, considerando trˆes avaliacoes que possuem pesos diferentes. 
Escreva um programa que ajude o estudante a
calcular sua m´edia ponderada com base nas notas e pesos fornecidos. O programa deve
incluir as seguintes fun¸c˜oes:
3
• void solicitarNotaEPeso(...) solicita ao usu´ario a nota e o peso de uma avaliacão e validando a entrada.
 Deve ser chamada para cada avalia¸c˜ao.
• double calcularMediaPonderada(...) recebe as trˆes notas e seus respectivos pessos como argumentos e retorna 
a m´edia ponderada calculada.
Valida¸c˜ao de Entrada: Certifique-se de que as notas fornecidas estejam entre 0 e 10 e
que os pesos sejam n´umeros positivos. Se o usu´ario fornecer valores inv´alidos, pe¸ca para
inserir novamente at´e que os valores sejam corretos.*/


#include <iostream>
#include <clocale>

using namespace std;

void solicitarNotaEPeso(double &nota, double &peso);
double calcularMediaPonderada(double nota1, double peso1, double nota2, double peso2, double nota3, double peso3);

int main(){

    double nota1, peso1, nota2, peso2, nota3,peso3, mediafinal;

    cout << "Avaliação 1:\n";
    solicitarNotaEPeso(nota1, peso1);

    cout << "\nAvaliação 2:\n";
    solicitarNotaEPeso(nota2, peso2);

    cout << "\nAvaliação 3:\n";
    solicitarNotaEPeso(nota3, peso3);

    mediafinal = calcularMediaPonderada(nota1, peso1, nota2, peso2, nota3, peso3);
    
    cout << "\n\nA média ponderada é: " << mediafinal << "\n";

    return 0;
}

void solicitarNotaEPeso(double &nota, double &peso){
    do{
        cout << "Informe a nota da avaliação:";
        cin >> nota;
        if(nota < 0 || nota > 10){
            cout << "Nota invalida, digite novamente:";
        }
    }while(nota < 0 || nota > 10);

    do{
        cout << "Informe o peso da avaliação";
        cin >> peso;
        if(peso <= 0){
            cout << "\nPeso invalido, digite novamente:";
        }
    }while(peso <= 0);
}

double calcularMediaPonderada(double nota1, double peso1, double nota2, double peso2, double nota3, double peso3){
    double somaP = peso1 + peso2 + peso3;
    return (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / somaP;
}
