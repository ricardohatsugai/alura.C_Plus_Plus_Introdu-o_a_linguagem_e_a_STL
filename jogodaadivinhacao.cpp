#include <iostream>

using namespace std;

int main(){
    cout << "**********************************************" << endl;
    cout << "************ Seja bem vindo ******************" << endl;
    cout << "**********************************************" << endl << endl;

    cout << "Escolha seu nível de dificuldade" << endl << endl; 

    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas = 0;

    if (dificuldade == 'F')
    {
        numero_de_tentativas = 15;
    } 
    else if (dificuldade == 'M')
    {
        numero_de_tentativas = 10;    
    }
    else {
        numero_de_tentativas = 5;
    }
    
    

    /*Declarações de variáveis*/
    const int numero_secreto = 32; // Variável constante.
    bool nao_acertou = true;
    int tentativas = 0;
    double pontos = 1000.0;
    /****************************/

    for(tentativas = 1; tentativas <= numero_de_tentativas;tentativas++)
    {      
        int chute=0;

        cout << "tentativa " << tentativas << endl;
        cout << "Qual seu chute? " << endl;
        cin >> chute;
        cout << "O valor do seu chute é: " << chute << endl;

        bool acertou = chute == numero_secreto;
        bool maior = chute > numero_secreto;
        double pontos_perdidos = abs(chute - numero_secreto) / 2.0;
        pontos = pontos - pontos_perdidos;

        if(acertou){
            cout << "parabéns! Você acertou o número secreto!"<< endl;
            nao_acertou = false;
            break;
        }
        else if(maior){
            cout << "Seu chute foi maior que o número secreto!" << endl;
        }
        else{
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
    }
    cout << "Fim de jogo!" << endl;
    if (nao_acertou)
    {
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else{    
        cout << "Parabéns! Você acertou o número secreto! Em " << tentativas << " tentativas." << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
    }
}