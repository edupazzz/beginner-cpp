#include <iostream>
#include <cstdlib>
using namespace std;



int main() {
  int n1, n2, n3, res;
  char veri;
  inicio:
  system ("cls");

    cout << "==========Aprovados e Reprovados==========\n\n";
    cout << "Basta digitar as respectivas notas para obter o resultado.\n\n";
      cout << "Digite a Primeira nota:";
        cin >> n1;
        cout << "\n";
      cout << "Digite a Segunda nota:";
        cin >> n2;
        cout << "\n";
      cout << "Digite a Terceira nota:";
        cin >> n3;
        cout << "\n";
          cout <<"\n\n";

  res = n1+n2+n3;


if (res/3<6) {
  cout << "O aluno esta REPROVADO.\n";
} else if (res/3>6) {
    cout << "O aluno esta APROVADO.\n";
}

      if (res/3==6) {
        cout << "Aluno em RECUPERACAO.\n\n";
}

cout << "\nDeseja continuar a verificar as notas? [S/N]\n";
cin >> veri;

if (veri == 'S' or veri =='s') {
  goto inicio;
}

return 0;
}
