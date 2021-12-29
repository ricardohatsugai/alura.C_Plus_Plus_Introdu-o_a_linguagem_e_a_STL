#include <iostream>

using namespace std;

int main(){
    cout << "**********************************************" << endl;
    cout << "************ Seja bem vindo ******************" << endl;
    cout << "**********************************************" << endl << endl;

   /*Declarações de variáveis*/
    const int numero_secreto = 32; // Variável constante.
    int chute=0;
    bool acertou = chute == numero_secreto;
    bool maior = chute > numero_secreto;
    /****************************/

    cout << "Qual seu chute? " << endl;
    cin >> chute;
    cout << "O valor do seu chute é: " << chute << endl;

    if(acertou){
        cout << "Parabéns! Você acertou o número secreto!" << endl;
    }
    else if(maior){
        cout << "Seu chute foi maior que o número secreto!" << endl;
    }
    else{
        cout << "Seu chute foi menor que o número secreto!" << endl;
    }
}