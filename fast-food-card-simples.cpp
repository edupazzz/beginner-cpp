#include <iostream>
#include <iomanip>



int main() {

  //Vars:

    float quantidade, res;
    short pedido;
  //--------------------------

  std::cout << "\n Bem vindo a venda da Senhora-X\n\n\n";
  std::cout << "   TABELA DE PRODUTOS \n";
  std::cout << " =======================\n\n\n";

  std::cout << "Digite o número correspondente aos pedidos,\n";
  std::cout << "e em seguida, a quantidade que deseja:\n\n\n";
  std::cout << "======================================" << '\n';
  std::cout << "\n 1 - Cachorro Quente______R$ 4.00\n";
  std::cout << "\n 2 - X-Salada_____________R$ 4.50\n";
  std::cout << "\n 3 - X-Bacon______________R$ 5.00\n";
  std::cout << "\n 4 - Torrada Simples______R$ 2.00\n";
  std::cout << "\n 5 - Refrigerante_________R$ 1.50\n";
  std::cout << "======================================\n\n";

  std::cout << " Digite seu pedido: ";
    std::cin >> pedido;

  std::cout << "Digite a Quantidade: ";
    std::cin >> quantidade;
  system("clear");

//-----calculos-----

      switch (pedido) {
        case 1:
          res = 4.00 * quantidade;
        break;

        case 2:
         res = 4.50 * quantidade;
        break;

        case 3:
         res = 5.00 * quantidade;
        break;

        case 4:
         res = 2.00 * quantidade;
        break;

        case 5:
         res = 1.50 * quantidade;
        break;
       }


       std::cout << std::fixed;
       std::cout << "\n\n\n Total a pagar: R$ " << std::setprecision(2) << res << "\n\n";








  return 0;
}
