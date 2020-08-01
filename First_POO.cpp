
/*@Eduardo_Paz
@Aprendendo_POO*/

#include <iostream>

using namespace std;

//Existem elementos PÚBLICOS e PRIVADOS:
//Aqui declaramos uma classe, com seus elementos públicos e privados:
class Aviao{

public:
//Aqui declaramos 3 parâmetros:
  int vel=0;
  int velMax;
  string tipo;
//E um metodo, chamado "ini", que recebe um parâmetro inteiro chamado "tp",
//prototipado:
  void ini(int tp);
};
//Aqui, criamos o metodo "ini". Ele verifica qual foi o valor passado
//como parametro para o "tp":
void Aviao::ini (int tp) { //1-Jato, 2-Monomotor, 3-Planador;
  if (tp==1) {
    this-> velMax=1000;
    this-> tipo="Jato";
  }else if(tp==2) {
    this-> velMax=350;
    this-> tipo="Monomotor";
  }else if(tp==2) {
    this-> velMax=220;
    this-> tipo="Planador";
  }
}

int main() {
//Instanciando um novo objeto, do tipo "Aviao". com nome "av1":
  Aviao *av1=new Aviao();
//Aqui, chamamos o metodo de inicialização:
//para o objeto av1, chamamos o metodo "ini", e passamos o valor "1":
  av1->ini(1);

  cout << "\nTipo de Aviao.............: " << av1->tipo << "\n";
  cout << "\nVelocidade maxima do Aviao: " << av1->velMax << '\n';

  return 0;
}
