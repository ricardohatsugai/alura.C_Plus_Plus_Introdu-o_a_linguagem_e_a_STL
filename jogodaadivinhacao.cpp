#include <iostream>

using namespace std;

int main(){
    cout << "**********************************************" << endl;
    cout << "************ Seja bem vindo ******************" << endl;
    cout << "**********************************************" << endl << endl;

    int numero_secreto = 32;

    int chute=0;
    cout << "Qual seu chute? " << endl;
    cin >> chute;
    cout << "O valor do seu chute é: " << chute << endl;

    if(chute == numero_secreto){
        cout << "Parabéns! Você acertou o número secreto!" << endl;
    }
    else if(chute > numero_secreto){
        cout << "Seu chute foi maior que o número secreto!" << endl;
    }
    else{
        cout << "Seu chute foi menor que o número secreto!" << endl;
    }
}