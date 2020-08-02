//Código simples, criando um arrey e dando ao usuário a oportunidade
//de escolher quantos números serão inseridos no arrey, (máximo 10000)
//e então, escolhido o limite e posteriormente os números que serão
//guardados, os números são mostrados de trás para frente:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;


int main()
{
  int arrey[0], N,i;
  cin>>N;
  for(i=1;i<=N;i++)
  {
      cin>>arrey[i];
  }
  for(i=0;i<N;i++)
  {
      cout<<arrey[N-i]<<" ";
  }
  return 0;
}
