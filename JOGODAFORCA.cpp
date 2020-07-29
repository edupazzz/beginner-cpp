#include <iostream>
#include <stdlib.h>


using namespace std;

int main() {

  char palavrasecreta[30], letra[1], palavradesvendada[30];
  int tam, i, chances, acertos;
  bool acerto;

  chances=6;
  tam=0;
  i=0;
  acerto=false;
  acertos=0;


  cout << " ======JOGO DA FORCA: N1======\n\n ";
  cout << " Olhe para o outro lado enquanto o Mestre digita a palavra! \n";
  cout << "  Palavra secreta...: ";
  cin >> palavrasecreta;
  system("cls");

  while(palavrasecreta[i] != '\0' ){
      i++;
      tam++;
  }

  for (i= 0;  i<30; i++) {
    palavradesvendada[i]='-';
  }

  while ((chances> 0) && (acertos < tam)) {
    cout << "Chances restantes: " << chances << "\n";
    cout << "Palavra secreta: ";
      for ( i= 0; i < tam; i++) {
        cout << palavradesvendada[i];
      }
      cout << "\n Digite uma letra: ";
      cin >> letra[0];
      for (i = 0; i < tam; i++) {
        if(palavrasecreta[i]==letra[0]){
          acerto=true;
          palavradesvendada[i]=palavrasecreta[i];
          acertos++;
        }

      }
      if(!acerto){
        chances--;
      }
      acerto=false;
      system("cls");
  }

  if (acertos==tam) {
    cout << "GAAANHOU!!!\n";
  }else{
    cout << "LOSE!!! VOCÊ CAIU NA PEGADINHA DO MARIO GAMES.\n";  }

  return 0;
}
