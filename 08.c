/*
8. Escreva um algoritmo que leia a quantidade de vitórias, empates e derrotas de um
time de futebol, de um total de 38 jogos, sendo que 19 jogos foram em casa e outros 19
fora de casa (a forma de leitura dos dados é livre, pode ser feita a leitura de jogos em
casa separados de jogos fora). O algoritmo em seguida deve calcular e escrever na tela:
- a quantidade de pontos obtida pelo time;
- o percentual de aproveitamento em casa do time;
- o percentual de aproveitamento em fora de casa do time;
- o percentual de aproveitamento total do time;
Obs: Cada vitória 3 pontos, empate a 1 ponto e derrota 0 ponto. */

#include "stdlib.h"
#include "stdio.h"

int leituraJogosCasa();
int leituraJogosForaCasa();
int quantidadePontosTotal(int pontosC, int pontosFC);
float aproveitamentoCasa(int vitC, int empC);
float aproveitamentoForaCasa(int vitFC, int empFC);

int main(){
  int vitC = 0, vitFC = 0, empC = 0, empFC = 0, derrC = 0, derrFC = 0, pontosC = 0, pontosFC = 0, totalpontos;
  float apc, apfc, apt;
  printf("Esse programa faz a leitura dos jogos de um time, considerando 19 jogos de IDA e VOLTA\n");
  printf("Enquanto a entrada nao for correta, com 19 jogos, o sistema nao aceita\n");
  pontosC = leituraJogosCasa(&vitC, &empC, &derrC, &pontosC);
  pontosFC = leituraJogosForaCasa(&vitFC, &empFC, &derrFC);
  totalpontos = quantidadePontosTotal(pontosC, pontosFC);
  apc = aproveitamentoCasa(vitC, empC);
  apfc = aproveitamentoForaCasa(vitFC, empFC);
  apt = apc + apfc / 2;
  printf("Total de pontos: %d, aproveitamento em casa %.2f%%, aproveitamento fora de casa %.2f%%, aproveitamento total %.2f%% \n", totalpontos, apc, apfc, apt);
  return 0;
}

int leituraJogosCasa(int *vitC, int *empC, int *derrC, int *pontosC){
  int jogosC = 0;
  printf("Entre com o resultado dos jogos em CASA:\n");
  do {
    // printf("Digite o numero de vitorias, empates e derrotas\n");
    scanf("%d %d %d", vitC, empC, derrC);
    jogosC = *vitC + *empC + *derrC;
    if (jogosC < 19)
      printf("Número incorreto de jogos, o total deve ser 19!, insira novamente\n");
  } while( jogosC != 19 );
  int totalpontosC = (*vitC * 3) + (*empC * 1);
  return totalpontosC;
}

float aproveitamentoCasa(int vitC, int empC){
  int pontosC = 0;
  float aprovCasa = 0.0;

  pontosC += vitC * 3;
  pontosC += empC * 1;
  aprovCasa = (pontosC * 100.0) / 57.0;
  return aprovCasa;
}

int leituraJogosForaCasa(int *vitFC, int *empFC, int *derrFC){
  int jogosFC = 0;
  printf("Entre com o resultado dos jogos FORA DE CASA:\n");
  do {
    printf("Digite o numero de vitorias, empates e derrotas\n");
    scanf("%d %d %d", vitFC, empFC, derrFC);
    jogosFC = *vitFC + *empFC + *derrFC;
    if (jogosFC < 19)
      printf("Número incorreto de jogos, o total deve ser 19!, insira novamente\n");
  } while( jogosFC != 19 );
  int totalpontosFC = (*vitFC * 3) + (*empFC * 1);
  return totalpontosFC;
}

float aproveitamentoForaCasa(int vitFC, int empFC){
  int pontosFC = 0;
  float aprovForaCasa = 0.0;
  pontosFC += vitFC * 3;
  pontosFC += empFC * 1;
  aprovForaCasa = (pontosFC * 100.0) / 57.0;
  return aprovForaCasa;
}

int quantidadePontosTotal(int pontosC, int pontosFC){
  int pontostotal = pontosC + pontosFC;
  return pontostotal;
}
