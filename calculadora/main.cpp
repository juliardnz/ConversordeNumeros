#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
    int contador = 1; //contador de controle do laco while
    int decimal;
    int binario [11];
    do{
            int opcao;
            setlocale (LC_ALL, "Portuguese");
            cout << "  " << endl;
            cout << "------------------------" << endl;
            cout << "**CONVERSOR DE NUMEROS**" << endl;
            cout << "------------------------" << endl;
            cout << "  " << endl;
            cout << "ESCOLHA UMA OPCAO:" << endl;
            cout << "  " << endl;
            cout << "[ 1 - DECIMAL PARA BINARIO: ]" << endl;
            cout << "[ 2 - BINARIO PARA DECIMAL: ]" << endl;
            cout << "[ 0 - SAIR                  ]" << endl;
            cout << "  " << endl;
            cin >> opcao;
            system("clear||cls");

            if (opcao == 1) {
                cout << "  " << endl;
                cout << "Voce escolheu de DECIMAL para BINARIO!" << endl;
                cout << "Digite um numero em DECIMAL:  " << endl;
                cin >> decimal;
                cout << "O numero digitado foi:  " << decimal << endl;
                    for (int cont = 10 ; cont > -1; cont--) {
                    if (decimal % 2 == 0) {
                        binario[cont] = 0;
                    }else{
                        binario[cont] = 1;
                    }
                    decimal = decimal / 2;

            } cout << ("EM BINARIO O RESULTADO É:  ");
            for (int i = 0; i < 11; i ++) {
                cout << binario[i];
            }

    }else{
        if (opcao == 2) {
            int binario;
            int decimal = 0;
            cout << "  " << endl;
            cout << "Voce escolheu de BINARIO para DECIMAL!" << endl;
            cout << "Digite um numero em BINARIO:  " << endl;
            cin >> binario;
            int i = 0;
            for (int i = 0; i < 11 ; i ++) {
            decimal = decimal + pow(2, i)*(binario%10);
            binario = binario / 10;

            }cout << decimal << endl;
    }else{
        if (opcao == 0) {
            cout << "  " << endl;
            cout << "FINALIZANDO CALCULADORA" << endl;

        }else{
            cout << "  " << endl;
            cout << "Voce digitou uma opcao invalida, tente novamente." << endl;
        }
      }
    }

    }while (contador < 0);

return 0;
}
