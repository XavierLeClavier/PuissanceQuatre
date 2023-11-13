#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char* columns = "1234567"; // columns
    char L1[] = "_______";
    char L2[] = "_______";
    char L3[] = "_______";
    char L4[] = "_______";
    char L5[] = "_______";
    char L6[] = "_______";
    char* templine;
    char arrayoflines[7] = {columns, L1, L2, L3, L4, L5, L6};

    bool play = true;
    int column, line;
    char player1[20], player2[20];

    printf("Bienvenue dans le jeu du puissance 4 !\nJoueur 1, quel est votre nom ?\n");
    scanf("%s", player1);
    printf("Joueur 2, quel est votre nom ?\n");
    scanf("%s", player2);
    printf("Bienvenue %s et %s !\n%s sera représenté par des X et %s par des O\n", player1, player2, player1, player2);

    while (play = true)
    {
        // system("clear");
        printf("Voici le plateau de jeu :\n");
        for (int i = 0; i < 7; i++)
        {
            templine = arrayoflines[i];
            printf("%s\n", templine);
        }

        printf("%s, dans quelle colonne voulez-vous jouer ?\n", player1);
        scanf("%d", &column);
        column = column - 1;
        line = 5;
        while (arrayoflines[line][column] != '_') //to find the first empty line
        {
            line = line - 1;
        }
        arrayoflines[line][column] = 'X';

        //same for player 2
        printf("%s, dans quelle colonne voulez-vous jouer ?\n", player2);
        scanf("%d", &column);
        column = column - 1;
        line = 5;
        while (arrayoflines[line][column] != '_') 
        {
            line = line - 1;
        }
        arrayoflines[line][column] = 'O';

        //check if there is a winner...
        
        //...in the columns
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arrayoflines[j][i] == arrayoflines[j+1][i] && arrayoflines[j][i] == arrayoflines[j+2][i] && arrayoflines[j][i] == arrayoflines[j+3][i])
                {
                    if (arrayoflines[j][i] == 'X')
                    {
                        printf("Bravo %s, vous avez gagné !\n", player1);
                        play = false;
                    }
                    else if (arrayoflines[j][i] == 'O')
                    {
                        printf("Bravo %s, vous avez gagné !\n", player2);
                        play = false;
                    }
                }
            }
        }

        //...in the lines
        if (play == true)
        {
            for (int i = 0; i < 7; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (arrayoflines[j][i] == arrayoflines[j][i+1] && arrayoflines[j][i] == arrayoflines[j][i+2] && arrayoflines[j][i] == arrayoflines[j][i+3])
                    {
                        if (arrayoflines[j][i] == 'X')
                        {
                            printf("Bravo %s, vous avez gagné !\n", player1);
                            play = false;
                        }
                        else if (arrayoflines[j][i] == 'O')
                        {
                            printf("Bravo %s, vous avez gagné !\n", player2);
                            play = false;
                        }
                    }
                }
            }
        }
    }
    return 0;
}