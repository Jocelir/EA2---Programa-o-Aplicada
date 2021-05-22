//ATIVIDADE 1 - Problema de troca em um vetor de caracteres;
#include <iostream>
#include <istream>
#include <string.h>
using namespace std;

//funcao principal;
int funcao (char *entrada[], int n, char a , char b, char *saida[])
{
  int cont = 0;
    for (int i =0; i < n; i++)
    {
      if (*entrada[i] == a)
      {
        *saida[i] = b; 
        cont ++;
      }
      else
      {
       *saida[i] = *entrada[i]; 
      }
    }
return cont;
}

int main() 
{
int n = 0;
cout << "Digite quantas letras tem a palavra: " << endl;
cin >> n;

char palavra[n];
char a;
char b;
char novapalavra[n];
char* ppalavra[n];
char* nnovapalavra[n];

ppalavra[n] = &palavra[n];
nnovapalavra[n] = &novapalavra[n];

cout << "Digite a palavra: " << endl;
cin >> palavra;

cout << "Qual letra voçê quer trocar? " << endl;
cin >> a;

cout << "Qual letra voçê colocar no lugar? " << endl;
cin >> b;

cout << *ppalavra[n];

funcao(ppalavra, n, a, b, nnovapalavra);

// palavra original.
cout << "A palavra é: " << palavra[n] << endl;

// nova palavra.
cout << "A nova palavra é: " << novapalavra[n] << endl;

//retornar o numero de trocas que foi efetuado.
cout << "O numero de trocas foi: "<< funcao(ppalavra, n, a, b, nnovapalavra) << endl;

}