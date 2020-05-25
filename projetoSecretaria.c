#include <stdio.h>

void opc1() {
  printf("\n------------------ MEDIA DE NOTAS -------------------\n");

  int quant_notas=0;
  float notas = 0.0,soma;

  printf("Digite as notas: \n");
  while(notas != -1) {
    scanf("%f", &notas);

    if(notas != -1) {
      soma+=notas;
      quant_notas++;
    }
  }
  printf("A média de notas é %.2f \n\n", (soma/quant_notas));
}

void opc2() {
  printf("\n------------------ CONTADOR DE FALTAS -------------------\n");

  char n[0];
  int s = 0;
  int x = 0;

  printf("Digite o p para presença e f para falta. \n");
  while(n[0] != '-' && n[1] != '1'){
    scanf("\n%s", &n[0]);

    if(n[0] == 'p'){
      s++;
    }

    if(n[0] == 'f'){
      x++;
    }
  }

  printf("\nA quantidade de presentes é: %d\n",s);
  printf("A quantidade de faltas é: %d\n", x);

}

void opc3() {
  printf("\n------------------ CONTADOR DE APROVAÇÕES -------------------\n");
  
  float notas;
  int x=0,y=0;

  while(notas != -1) {
    printf("Digite a nota: ");
    scanf("%f", &notas);

    if(notas >= 60){
      x++;
    }else if(notas != -1){
      y++;
    }
  }
  
  printf("Número de aprovações: %d e Número de reprovações: %d\n", x,y);


}

void opc4() {
  printf("\n------------------ ESTATÍSTICAS DA TURMA -------------------\n");

  float notas=0.0,soma,quant_notas;
  int aprovados=0,reprovados=0,maior,menor=9999;

  maior = notas;

  printf("Digite as notas \n");
  while(notas != -1){
    scanf("%f", &notas);

    if(notas != -1) {
      soma+=notas;
      quant_notas++;

      if(notas >= 60){
        aprovados++;
      }else{
        reprovados++;
      }

      if(notas > maior){
        maior = notas;
      }
      if(notas < menor){
        menor = notas;
      }
    }
  }

  printf("\nNúmero de aprovados: %d \n", aprovados);
  printf("Número de reprovados: %d \n", reprovados);
  printf("Maior nota: %d \n", maior);
  printf("Menor nota: %d \n", menor);
  printf("Média da turma: %.2f \n", (soma/quant_notas));

}

void menu(){
  printf("\nBem vindo ao Sistema de auxilio da secretaria da UNIPAC.\n\n");
  printf("Escolha uma das opções.\n");
  printf("1 - Média de notas.\n");
  printf("2 - Contador de faltas.\n");
  printf("3 - Contador de aprovações.\n");
  printf("4 - Estatísticas da turma.\n");
  printf("5 - Sair.\n");
}

int main(void) {

  int item_menu;
  
  while(item_menu !=5){
    menu();
    scanf("%d", &item_menu);
    switch (item_menu){
    case 1: 
      opc1();
      break;
    case 2: 
      opc2();
      break;
    case 3: 
      opc3();
      break;
    case 4: 
      opc4();
      break;
    case 5:
      printf("Você saiu do sistema. \n\n");
      break;    
    default:
      printf("Digite uma opção válida \n");
      break;
    }
  }
  
  return 0;
}