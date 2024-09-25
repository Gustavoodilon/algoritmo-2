#include <iostream>
#include <cstring>

using namespace std;

void ReverterString(char *str);

int main(){
    char string[100];

    cout << "Informe uma string: ";
    cin.getline(string, 100);

    cout << "String original: " << string << "\n";

    ReverterString(string);

    cout << "String invertida: " << string << "\n";

    return 0;
}

void ReverterString(char *str){
    int tamanho = 
    strlen(str); //calcular o tamanho da string 

    //exibe a string de tras para frente
    for(int i = 0; i < tamanho/ 2; i++){
        //trocar todos os caracteres do inicio para o fim
        char temp = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = temp;

    }
    cout << "\n";
}