#include <stdio.h>

int main() {

    //Desafio Batalha Naval - Aventureiro

    //1º Criar a Matriz com o espaço determinado [10][10] ("Casas")
    //2º Definir o valor determinado para a exibição da Matriz = 0 (água)
    //3º Definir e declarar o movimento de 4 návios em 3 "casas" para cada návio (1 horizontal, 1 vertical e 2 diagonais)
    //4º Definir o "Cabeçalho de A até J, para determinar a visualização das 10 "casas" para colunas"
    //5º Impressão do tabuleiro, com as linhas e matriz.

    int tabuleiro [10][10]; //10 linhas e 10 colunas
    //Matriz
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; //10 linhas e 10 colunas preenchidas com 0, para simular a água
        }
    }

    //Navio 01 na horizontal = B5, C5, D5
    int navio1linha = 4;
    int navio1coluna = 1;

    for (int i = 0; i < 3; i++){ 
        if (navio1coluna + i < 10){
            tabuleiro[navio1linha][navio1coluna + i] = 3;
        }
    }
    
    //Navio 02 na vertical = D1,D2,D3
    int navio2linha = 0;
    int navio2coluna = 3;

    for (int i = 0; i < 3; i++){
        if (navio2linha + i < 10){
            tabuleiro[navio2linha + i][navio2coluna] = 3;
        }
    }

    //Navio 03 na diagonal = E8, F9, H10
    int navio3linha = 7;
    int navio3coluna = 4;

    for (int i = 0; i < 3; i++){
        if (navio3linha + i < 10 && navio3coluna + i < 10) {
            tabuleiro[navio3linha + i][navio3coluna + i] = 3;
        }
        
    }
    
    //Navio 04 na diagonal = G6, H7, I8
    int navio4linha = 5;
    int navio4coluna = 6;

    for (int i = 0; i < 3; i++){
        if (navio4coluna + i < 10 && navio4linha + i < 10) {
            tabuleiro[navio4linha + i][navio4coluna + i] = 3;
        }
        
    }


    printf("  "); //Espaçamento para as letras das colunas não ficarem em cima dos números de linhas
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf(" %c", letra);
    } 
        printf("\n");//Pula para as linhas
    

    for (int i = 0; i < 10; i++) { 
        printf("%2d", i + 1); //impressão das linhas
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]); //impressão da matriz
        }
        printf("\n");
    }
    
    return 0;
}