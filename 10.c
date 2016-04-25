/*
10. Elabore um programa que leia o nome completo e o salário de funcionários de uma
empresa, ate que se digite o valor 0. O algoritmo deve calcular e imprimir:
a) O primeiro nome em maiúsculas e o maior salário da empresa;
b) O primeiro nome em minúsculas e o menor salário da empresa;
b) A média dos salários;*/

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

char *strupr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = toupper(*p);
      p++;
  }
  return str;
}

char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower(*p);
      p++;
  }
  return str;
}

int main(){

  char nome[100], maiorN[100], menorN[100];
  float salario, maiorS = 0, menorS = 0, media = 0;
  int continua = 1, i = 0;

  do {
    printf("Digite o nome:\n");
    scanf(" %[^\n]", nome);
    printf("Digite o salario:\n");
    scanf("%f", &salario);

    media += salario;
    i++;
    media = media / i;

    if ( maiorS == 0)
      maiorS = salario;

    if (menorS == 0)
      menorS = salario;

    if ( salario >= maiorS ){
      maiorS = salario;
      strcpy(maiorN, nome);
    }
    if ( salario <= menorS){
      menorS = salario;
      strcpy(menorN, nome);
    }

    printf("Digite 0 para encerrar o cadastrou, ou outro numero para seguir cadastrando\n");
    scanf("%d", &continua);
  } while( continua != 0);

  for(i=0 ; maiorN[i] != ' '; i++){ // transforma o primeiro nome em maiusculas
    maiorN[i] = toupper(maiorN[i]);
  }

  for(i=0 ; menorN[i] != ' '; i++){ // transforma o primeiro nome me minusculas
    menorN[i] = tolower(menorN[i]);
  }

  printf("Maior salario da empresa eh do %s e o valor eh %.2f \n", maiorN, maiorS);
  printf("Menor salario da empresa eh do %s e o valor eh %.2f \n", menorN, menorS);
  printf("A media salarial eh de %.2f\n", media);

  return 0;
}
