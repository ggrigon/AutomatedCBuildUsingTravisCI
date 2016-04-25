/*
12) Escrever um programa que realize a inversão de uma palavra dada como entrada
(ordem de elementos). Faça o programa ler uma sequencia de strings usando estruturas
de repetição e somente parar quando for digitado o número “0”. A inversão deve ser
feita em uma função. Ex: “brasil” -> “lisarb”.
*/

#include <stdio.h>
#include <string.h>



int main(){
  char string[100], reversa[100];
  int i, j, tam;

  while ( strcmp(string, "0") != 0 ){
    printf("Digite uma string:\n");
    scanf(" %[^\n]", string);

    tam = strlen(string);
    for(i=tam, j = 0;i >=0;i--, j++){
      printf("%c", string[i]);
    }
    printf("\n");
  }

  return 0;
}
