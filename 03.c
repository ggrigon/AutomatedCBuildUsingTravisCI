/*
3. A concessionária de veículos “CARANGAS” está vendendo os seus veículos com
desconto. Faça um algoritmo que calcule e exiba o valor do desconto e o valor a ser
pago pelo cliente de vários carros. O desconto deverá ser calculado de acordo com o ano
do veículo. Até 2000 - 12% e acima de 2000 - 7%. O sistema deverá perguntar se deseja
continuar calculando desconto até que a resposta seja: “(N) Não” .
- Entradas: Marca e Modelo do Carro, Ano, Valor.
- Saída: Marca e Modelo do Carro, Porcentagem de desconto, valor
*/
#include "stdlib.h"
#include "stdio.h"

int desconto(int ano); // funcao para descobrir qual desconto a ser aplicado
float aplicaDesconto(float porcentagem, float valor); // funcao que aplica o desconto

int main(){
  char marca[50], modelo[50], continua = 0;
  int ano, porcentagem;
  float valor, vdesconto;

  do {
    printf("Insira a Marca, Modelo, Ano e Valor do Carro\n");
    scanf(" %[^\n]", marca); // scanf que le até o primeiro enter
    scanf(" %[^\n]", modelo);

    scanf("%d", &ano);
    scanf("%f", &valor);
    fpurge(stdin);
    porcentagem = desconto(ano);
    vdesconto = aplicaDesconto(porcentagem, valor);
    printf("Marca: %s Modelo: %s Porcentagem de desconto: %d%% Valor Final: R$%0.2f \n", marca, modelo, porcentagem, vdesconto);
    printf("Deseja Continuar calculando o desconto?\n");
    scanf("%c", &continua);
    fpurge(stdin);
  } while ( continua != 'N' && continua != 'n');

  return 0;
}

int desconto(int ano){
  int porcentagem;
      if ( ano > 2000)
        porcentagem = 7;
      else
        porcentagem = 12;
  return porcentagem;
}

float aplicaDesconto(float porcentagem, float valor){
  float vdesconto;
  porcentagem = porcentagem / 100;
  vdesconto = valor - (valor * porcentagem);
  return vdesconto;
}
