/*
2. Ler uma sequencia de 5 pares de números inteiros, atribuídos a x e y. Em seguida
imprimir o quociente e o resto da divisão inteira entre cada par de valores.
*/
#include "stdlib.h"
#include "stdio.h"

int lerNumeros();

int main(){
  lerNumeros();
  return 0;
}

int lerNumeros(){
  int i, quociente, resto, x, y;
  printf("Digite pares de numeros inteiros\n");
  for(i=0;i<5;i++){
    scanf("%d %d", &x, &y);
    quociente = x / y;
    printf("Quociente da operação no par %d: %d\n", i+1, quociente);
    resto = x % y;
    printf("Resto da operação no par %d: %d\n\n\n", i+1, resto);
  }
}
