/*Escreva uma fun¸c˜ao que aceite um ponteiro para uma C-string como argumento e exiba
seu conte´udo de tr´as para frente. Por exemplo, se o argumento da string for ”Gravidade”,
a fun¸c˜ao dever´a exibir ”edadivarG”. Demonstre a fun¸c˜ao em um programa que solicita
ao usu´ario que insira uma string e, em seguida, passe-a para a fun¸c˜ao.
*/

#include <iostream>
#include <cstring>

using namespace std;

void ExibirInverso(const char *str);

int main(){
    char string[100]; //declara um array para armazenar a string

    cout << "Informe uma string: ";
    cin.getline(string, 100); //ele ira ler a string do usuario ate 99

    cout << "\n\nString original: " << string << "\n";
    cout << "String de tras para frente: ";
    ExibirInverso(string); //aqui ele chamara a função para inverter a string

    return 0;
}

void ExibirInverso(const char *str){
    int tamanho = 
    strlen(str); //calcular o tamanho da string 

    //exibe a string de tras para frente
    for(int i = tamanho - 1; i >= 0; i--){
        cout << str[i];
    }
    cout << "\n";
}