#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 10
#define COLUNAS 10


int main() {
    

    
    int tabuleiro[LINHAS][COLUNAS];
    
    for ( int y = 0; y < LINHAS; y++)
    {
        for(int x = 0; x < COLUNAS; x++){

            tabuleiro[y][x] = 0;
            
        }

    }

    int inicio;

    //Horizontal (Mantém linha x aumenta coluna)

    inicio = 0;

    for (int x = inicio; x < (inicio + 4); x++)
    {
        tabuleiro[inicio][x] = 3;
    }
    
    //Vertical (Mantém coluna x aumenta linha)

    inicio = 2;

    for (int y = inicio; y < (inicio + 4); y++)
    {
        tabuleiro[y][inicio] = 3;
    }


    // Digonal Ant Horário (Linha = Coluna)

    inicio = 6;

    for (int y = inicio; y < (inicio + 4); y++)
    {
            tabuleiro[y][y] = 3;

    }

    //Digonal Horário (Linha Aumenta x Coluna Diminui)

    inicio = 5;

    for (int y = inicio, x = inicio; y < (inicio+4), x > (inicio-4); y++, x--)
    {
            tabuleiro[y][x] = 3;
    }
    
    
    // Exibir Tabuleiro

    printf("TABULEIRO PREENCHIDO\n");

    for ( int y = 0; y < LINHAS; y++)
    {
        for(int x = 0; x < COLUNAS; x++){

            printf("%d ",tabuleiro[y][x]);
            
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

 

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    printf("HABILIDADES\n");

    

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    printf("CONE\n");

    for ( int y = 0; y < LINHAS; y++)
    {
        for(int x = 0; x < COLUNAS; x++){

            tabuleiro[y][x] = 0;
            
        }

    }
   
    for (int y = 0; y < 3; y++)
    {
        for (int x = 2 - y; x <= y+2; x++)
        {
            tabuleiro[y][x] = 1;
        }

    }

    for ( int y = 0; y < LINHAS; y++)
    {
        for(int x = 0; x < COLUNAS; x++){

           printf("%d", tabuleiro[y][x]);
            
        }

        printf("\n");

    }
    
    printf("\n");
    printf("\n");

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    printf("OCTAEDRO\n");

    for ( int y = 0; y < LINHAS; y++)
    {
        for(int x = 0; x < COLUNAS; x++){

            tabuleiro[y][x] = 0;
            
        }

    }

    for (int y = 0; y < 3; y++)
    {
        tabuleiro[y][2] = 1;
    }

    for (int x = 1; x < 4; x++)
    {
        tabuleiro[1][x] = 1;
    }

    for ( int y = 0; y < LINHAS; y++)
    {
        for(int x = 0; x < COLUNAS; x++){

           printf("%d", tabuleiro[y][x]);
            
        }

        printf("\n");

    }
    printf("\n");
    printf("\n");


    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    printf("CRUZ\n");

    for ( int y = 0; y < LINHAS; y++)
    {
        for(int x = 0; x < COLUNAS; x++){

            tabuleiro[y][x] = 0;
            
        }

    }

    for (int y = 0; y < LINHAS; y++)
    {
        tabuleiro[y][2] = 1;
    }

    for (int x = 0; x < COLUNAS; x++)
    {
        tabuleiro[2][x] = 1;
    }

    for ( int y = 0; y < LINHAS; y++)
    {
        for(int x = 0; x < COLUNAS; x++){

           printf("%d", tabuleiro[y][x]);
            
        }

        printf("\n");

    }

   
    return 0;
}
