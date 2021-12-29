#include <iostream>

using namespace std;

int main(){
    cout << "**********************************************" << endl;
    cout << "************ Seja bem vindo ******************" << endl;
    cout << "**********************************************" << endl << endl;

   /*Declarações de variáveis*/
    const int numero_secreto = 32; // Variável constante.
    bool nao_acertou = true;
    int tentativas = 0;
    /****************************/

    while (nao_acertou)
    {      
        tentativas++;
        int chute=0;

        cout << "Qual seu chute? " << endl;
        cin >> chute;
        cout << "O valor do seu chute é: " << chute << endl;

        bool acertou = chute == numero_secreto;
        bool maior = chute > numero_secreto;

        if(acertou){
            cout << "Parabéns! Você acertou o número secreto! Em " << tentativas << " tentativas." << endl;
            nao_acertou = false;
        }
        else if(maior){
            cout << "Seu chute foi maior que o número secreto!" << endl;
        }
        else{
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
    }
    cout << "Fim de jogo!" << endl;
}