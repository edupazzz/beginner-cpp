/*Desafio Hackerrank: criar um programa que pede para o usuário
digitar quatro números, para então o programa lhe mostrar o maior
número digitado:*/


#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d, int res){

/* Aqui só precisei saber qual váriavel tinha o maior valor (poderia comparar)
* qualquer uma com qualquer outra, o resultado ia (e sempre vai), ser o mesmo:
* a váriavel "res" recebe o maior valor, e então basta comparar "res" com
* as outras váriáveis, fazendo "res" sempre receber o maior valor, se assim for,
* se não, res continua com o seu valor original, que é o maior.*/

    if(a>b)
      res=a;
    else res=b;

    if(c>res)
      res = c;

    if(d>res)
      res=d;


    return res;
}




int main() {
    int a, b, c, d, res;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d, res);
    printf("%d", ans);

    return 0;
}
