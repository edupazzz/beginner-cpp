#include <iostream>

using namespace std;

int main(){

int vei;

  cout << "Escolha uma transporte: \n\n";
  cout << "[1]=Carro    [2]=Moto   [3]=Aviao    [4]=Helicoptero \n\n";
  cin >> vei;

      switch (vei) {
            case 1:
            case 2:
                cout << "Transporte Terrestre escolhido.\n";
                switch (vei){
                  case 1:
                    std::cout << "Carro selecionado.\n";
                  break;
                  case 2:
                    std::cout << "Moto selecionada.\n";
                  break; }
            case 3:
            case 4:
                cout << "Tansporte aereo escolhido \n";
                switch (vei) {
                  case 3:
                    cout << "Aviao selecionado\n";
                  break;
                  case 4:
                    cout << "Helicoptero selecionado.\n";
                  break;

                }
            default:
                  cout << "Transporte selecionado invalido.\n";
      }

  cout <<"\n\nPrograma finalizado.\n\n";

return 0;
}
