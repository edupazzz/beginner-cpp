#include <iostream>
#include <iomanip>

using namespace std;

int main() {

//Vars

//float, funci;
float funci, horas, money, res;

string sai = "sim";



while (sai == ("sim")|| ("Sim") ) {



  std::cout << " Digite o número correspondente ao funcionário: ";
    std::cin >> funci;

  std::cout << "\n\n Digite o número de horas trabalhadas do funcionário N°" << funci << ": ";
    std::cin >> horas;

  std::cout << "\n\n Digite o valor que o funcionário N°" << funci << " recebe por hora: ";
    std::cin >> money;

//Calculos&&Resultado:


  res = horas * money;

  system("clear");

  std::cout << " Funcionário N°" << funci << " recebe: R$" << fixed <<setprecision(1) <<res;


//Sair ou continuar no programa:


  std::cout << "\n\n\n Deseja verificar outro funcionário? \n\n\n";
    std::cin >> sai;

system("clear");

 }


  return 0;
}
