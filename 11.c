/*
11. Desenvolva um algoritmo em C com o protótipo da função: pot(int m, int n) que
deve ser recursiva. A função eleva um inteiro m à potência inteira positiva n. Por
exemplo, o valor de pot(2,5) é 32. Em seguida o algoritmo deve:
a) utilizar a função definida para calcular e imprimir uma tabela contendo as
potências de uma sequência de 5 pares de valores que vão sendo fornecidos pelo
usuário.
b) modifique a função para pot2, altere a função para fazer o calculo da potência
com uma repetição do tipo “for” e usando variáveis globais. Em seguida faça o teste
para os mesmos 5 pares de valores.
*/

#include <stdio.h>

int pot(int m, int n);
int pot2(int m, int n);

int main(){
  int i, m, n, res;
  printf("Utilizando funcao recursiva:\n");
  for(i=0;i<5;i++){
    scanf("%d %d", &m, &n);
    res = pot(m,n);
    printf("%d elevado a %d = %d\n", m, n, res);
  }

  printf("Utilizando for: --------------\n");
  for(i=0;i<5;i++){
    scanf("%d %d", &m, &n);
    res = pot2(m,n);
    printf("%d elevado a %d = %d\n", m, n, res);
  }
  return 0;
}

int pot(int m, int n){
  if (n == 0)
    return 1;
  else
    return (m * pot(m, n-1));
}

int pot2(int m, int n){
  int i, total;
  for(i = 0, total = 1; n > 0; i++, n--){
    total =  total * m;
  }
  return total;
}
