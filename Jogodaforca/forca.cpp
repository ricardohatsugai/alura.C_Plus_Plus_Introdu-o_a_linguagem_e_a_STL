#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;
vector<char> chutes_errados;

bool letra_existe(char chute){
    for (char letra : PALAVRA_SECRETA){
        if (chute == letra){
            return true;
        }
    }
    return false;    
}



int main(){

    cout << "**********************" << endl;
    cout << "*** Jogo da Forca ***" << endl;
    cout << "**********************" << endl << endl;
    
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou){

        cout << "Chutes errados:";
        for(char letra: chutes_errados){
            cout << letra << " ";
        }
        cout << endl;

        for(char letra : PALAVRA_SECRETA){
            if(chutou[letra]){
                cout << letra << " ";
            }else{
                cout << "_ ";
            }
        }
        cout << endl;

        cout << "Seu chute: ";
        char chute;
        cin >> chute;

        chutou[chute] = true;

        if (letra_existe(chute)){
            cout << "Você acertou! Seu chute está na palavra." << endl;
        }else{
            cout << "Você errou! Seu chute não está na palavra." << endl;
            chutes_errados.push_back(chute);
        }
        cout << endl;
    }
    
}