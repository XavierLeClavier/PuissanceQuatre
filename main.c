#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

int main()
{
    char columns[8][1] = {'1', '2', '3', '4', '5', '6', '7', '\0'}; // columns
    char L1[8][1] = {'_', '_', '_', '_', '_', '_', '_', '\0'};
    char L2[8][1] = {'_', '_', '_', '_', '_', '_', '_', '\0'};
    char L3[8][1] = {'_', '_', '_', '_', '_', '_', '_', '\0'};
    char L4[8][1] = {'_', '_', '_', '_', '_', '_', '_', '\0'};
    char L5[8][1] = {'_', '_', '_', '_', '_', '_', '_', '\0'};
    char L6[8][1] = {'_', '_', '_', '_', '_', '_', '_', '\0'};
    char arrayoflines[7][8][1] = {columns, L1, L2, L3, L4, L5, L6};

    bool play = true;
    int column, line;
    char player1[20], player2[20];

    printf("Bienvenue dans le jeu du puissance 4 !\n");
    printf("Joueur 1, quel est votre nom ?\n");
    scanf("%s", player1);
    printf("Joueur 2, quel est votre nom ?\n");
    scanf("%s", player2);
    printf("Bienvenue %s et %s !\n", player1, player2);

    while (play = true)
    {
        system("clear");
        printf("Voici le plateau de jeu :\n");
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                printf("%s", arrayoflines[i][j]);
                printf(" ");
            }
            printf("\n");
        }



        play = false;
    }

    return 0;
}