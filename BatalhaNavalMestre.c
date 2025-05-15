#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define AGUA 0
#define HABILIDADE 5

#define TAM_HABILIDADE 5 // Tamanho da habilidade

    //Aqui é onde o tabuleiro é inicializado com água
void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
      tabuleiro[i][j] = AGUA;
    }
  }
}

   //Faz a exibição do tabuleiro no console
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
  printf("Tabuleiro:\n");
    for (int i = 0;i < TAM; i++) {
     for (int j = 0;i < TAM; j++) {
       if (tabuleiro[i][j] == AGUA)
         printf("~ ");
           else if (tabuleiro[i][j] == NAVIO)
             printf("N ");
           else if (tabuleiro[i][j] == HABILIDADE)
             printf("* ");
       }
        printf("\n");
    }
}


    //Posicionamento dos navios de maneira fixa para a visualização
void posicionarNavios(int tabuleiro[TAM][TAM]) {
   //Navio Horizontal
  for (int i = 0; i < 3; i++) {
    tabuleiro[1][2 + i] = NAVIO;
}

      //Navio Vertical
   for(int i = 0; i < 3; i++) {
     tabuleiro[5 + i][7] = NAVIO;
}

      //Navio Diagnal -->
    for (int i = 0; i < 3; i++) {
      tabuleiro[3 + i][3 + i] = NAVIO;
}

       //Navio Diagnal <--
    for (int i = 0; i < 3; i++) {
      tabuleiro[5 + i][6 - i] = NAVIO;
  }
}

//Gera a matriz de Cone (5x5) para baixo
void gerarCone(int matriz[TAM_HABILIDADE][TAM_HABILIDEADE]) {
  for (int i = 0; i < TAM_HABILIDADE; i++) {
   for (int j = 0; j < TAM_HABILIDADE; j++) {
     if (i >= j - 2 && i >= 2 - j) //esse é o formato do cone de maneira invertida
       matriz[i][j] = 1;
      else
       matriz[i][j] = 0
     }
   }
}

//Gera a amatriz de cruz (5x5)
void gerarCruz(int matriz[TAM_HABILIDADE][TAM_HABILIDADE]) {
  for (int i = 0; i < TAM_HABILIDADE; i++) {
    for )int j = 0; j < TAM_HABILIDADE; j++) {
       if (i == TAM_HABILIDADE / 2 || j == TAM_HABILIDADE / 2)
         matriz[i][j] = 1;
       else
         matriz[i][j] = 0;
    }
  }
}

//Gera a matriz de octaedro (losango)
void gerarOctaedro(int matriz[TAM_HABILIDADE][TAM_HABILIDADE]) {
  for (int i = 0; i < TAM_HABILIDADE; i++) {
    for (int j = 0; j < TAM_HABILIDADE; j++) {
      ifa (abs(i - 2) + abs(j - 2) <= 2) //Fórmula do losango
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;
    }
  }
}


























