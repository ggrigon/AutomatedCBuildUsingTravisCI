/*
O cardápio de uma casa de Hamburger é dado abaixo. Preparar um algoritmo para
ler a quantidade de cada item comprado e calcular a conta final do cliente. Faça uma
função para fazer este cálculo e defina o uso de variáveis locais e globais.
Item Preço
Hamburger R$ 8,20
Cheeseburger R$ 12,50
MilkShake R$ 5,20
Coca-cola R$ 4,00 */

#include "stdlib.h"
#include "stdio.h"

float calculaTotal(int ham, int cheese, int milk, int coca);

int main(){
  int ham, cheese, milk, coca;
  float total;
  printf("Insira a quantidade de itens comprados\n");
  printf("Hamburguer?\n");
  scanf("%d", &ham);
  printf("Cheeseburguer?\n");
  scanf("%d", &cheese);
  printf("Milkshake?\n");
  scanf("%d", &milk);
  printf("Coca Cola?\n");
  scanf("%d", &coca);
  total = calculaTotal(ham, cheese, milk, coca);
  printf("Total da compra foi: R$ %.2f\n", total);
  return 0;
}

float calculaTotal(int ham, int cheese, int milk, int coca){
  float total;
  total = (ham * 8.20) + (cheese * 12.50) + (milk * 5.20) + (coca * 4.00);
  return total;
}
