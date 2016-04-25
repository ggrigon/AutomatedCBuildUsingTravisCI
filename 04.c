/*
4. Ler uma sequencia de 8 números inteiros e calcular a soma dos que forem par e cada
impar multiplicar por 2, antes de acumular seu somatório.
*/
#include "stdlib.h"
#include "stdio.h"

int main(){
  int i, n, soma = 0;
  for(i=0;i<8;i++){
    scanf("%d", &n);
    if (n % 2 == 0)
    {
      soma += n;
    } else{
      n *= 2;
      soma += n;
    }
  }
  printf("%d\n", soma);
  return 0;
}
