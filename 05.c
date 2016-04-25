/* 5. Elabore um algoritmo que informe se um dado ano é ou não é bissexto. Obs: um ano
é bissexto se ele for divisível por 400 ou se ele for divisível por 4 e não por 100.
*/

#include "stdlib.h"
#include "stdio.h"

int lerAno();
void testeBissexto();

int main(){
  int ano;
  ano = lerAno();
  testeBissexto(ano);
  return 0;
}

int lerAno(int nr){
  printf("Digite um ano:\n");
  scanf("%d", &nr);
  return nr;
}

void testeBissexto(int ano){

  if ( (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
    printf("O ANO %d EH BISSEXTO\n", ano);}
  else {
    printf("O ANO %d NAO EH BISSEXTO\n", ano);
  }
}
