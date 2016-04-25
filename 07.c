/*7. Escrever um programa em C para ler três valores do teclado e informar se eles
formam um triângulo. Escreva uma função que faça a análise e retorne seu tipo
(equilátero, isósceles ou escaleno).*/

#include "stdlib.h"
#include "stdio.h"

void analiseTriangulo();

int main(){
  int a, b, c;
  printf("Entre com tres valores:\n");
  scanf("%d %d %d", &a, &b, &c);
  analiseTriangulo(a, b ,c);
  return 0;
}

void analiseTriangulo(int a, int b, int c){
  if ( (a == b) && ( a == c) && (b == c)){
    printf("Triangulo Equilatero\n");
  } else if ( (a == b) || ( b == c) || ( a == c)) {
    printf("Triangulo isosceles\n");
  } else printf("Triangulo escaleno\n");
}
