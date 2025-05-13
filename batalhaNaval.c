#include <stdio.h>
#include <stdlib.h>

#define LINHAS 10
#define COLUNAS 10

void Imprimir_Letras(int letras[]){

    printf("  "); //Espaçamento para as letras das colunas não ficarem em cima dos números de linhas
    
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf(" %c", letra);
    } 
        printf("\n");//Pula para as linhas
}

void Imprimir_Tabela(int tabela[LINHAS][COLUNAS]){
    for (int i = 0; i < LINHAS; i++) { 
        printf("%2d", i + 1); //impressão das linhas
        for (int j = 0; j < COLUNAS; j++) {
            printf(" %d", tabela[i][j]); //impressão da matriz
        }
        printf("\n");
    }

}


void Habilidade_Cone(int tabuleiro[LINHAS][COLUNAS], int LinhaInicio, int ColunaInicio){
    for (int i = 0; i < 3; i++) {
        for (int j = ColunaInicio - i; j <= ColunaInicio + i; j++) {
            if (LinhaInicio + i < LINHAS && j >= 0 < COLUNAS)
            {
                tabuleiro[LinhaInicio + i][j] = 3;
            }
            
        }
        
    }
    
}

void Habilidade_Octaedro(int tabuleiro[LINHAS][COLUNAS], int LinhaCentro, int ColunaCentro){
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (abs(i) + abs(j) <= 1) {
                int Linha = LinhaCentro + i;
                int Coluna = ColunaCentro + j;
                if (Linha >= 0 && Linha < LINHAS && Coluna >= 0 && Coluna < COLUNAS) {
                    tabuleiro[Linha][Coluna] = 3;
                }
                
            }
            
        }
        
    }
    
}

void Habilidade_Cruz(int tabuleiro[LINHAS][COLUNAS], int LinhaCentro, int ColunaCentro){
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            if ((i == 0) || (j == 0)) {
                int Linha = LinhaCentro + i;
                int Coluna = ColunaCentro + j;
                if (Linha >= 0 && Linha < LINHAS && Coluna >= 0 && Coluna < COLUNAS) {
                    tabuleiro[Linha][Coluna] = 3;
                }
                
            }
            
        }
        
    }
    

}


int main() {

    int letras [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    
    int tabuleiro [LINHAS][COLUNAS]; //10 linhas e 10 colunas
    
    //Primeiro, preenche a matriz
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0; //definindo para que os valores das linhas e colunas sejam 0
        }
    }

    Habilidade_Cone(tabuleiro, 0, 2);
    Habilidade_Octaedro(tabuleiro, 3, 6);
    Habilidade_Cruz(tabuleiro, 7, 7);
    Imprimir_Letras(letras);
    Imprimir_Tabela(tabuleiro);

    return 0;
}