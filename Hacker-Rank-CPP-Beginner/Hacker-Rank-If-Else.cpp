/*O usuário digita um número que será o ponto de partida para uma contagem
até o segundo número que o usuário digitar. Então o programa mostra o nome
dos números de 0 até 9 em inglês, se o número for maior que 9
o programa mostra "even", que é "maior" em inglês, mas se caso o número
for ímpar o programa mostra "odd", ímpar em inglês:*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

  int a,b,n;

  cin>> a >> b;


  for (n = a; n <= b; n++) {

      if (1<n<=9){

        if(n==1) cout << "one\n";

        else if(n==2) cout << "two\n";
        else if(n==3) cout << "three\n";
        else if(n==4) cout << "four\n";
        else if(n==5) cout << "five\n";
        else if(n==6) cout << "six\n";
        else if(n==7) cout << "seven\n";
        else if(n==8) cout << "eight\n";
        else if(n==9) cout << "nine\n";
    }
      if(n>9){

        if(n%2==0) cout << "even\n";

        else cout << "odd\n";
      }



  }



  return 0;
}
