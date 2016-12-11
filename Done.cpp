#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Solve this puzzle by writing the shortest code.
 * Whitespaces (spaces, new lines, tabs...) are counted in the total amount of chars.
 * These comments should be burnt after reading!
 **/
int main()
{
    int LX; // the X position of the light of power
    int LY; // the Y position of the light of power
    int TX; // Thor's starting X position
    int TY; // Thor's starting Y position
    scanf("%d%d%d%d", &LX, &LY, &TX, &TY);
    // game loop
    while (1) {
        int remainingTurns; // The level of Thor's remaining energy, representing the number of moves he can still make.
        scanf("%d", &remainingTurns);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");


        // A single line providing the move to be made: N NE E SE S SW W or NW
        if(LY<TY&&LX<TX)
        {
            printf("NW\n");
            TY--;
            TX--;
        }
        else if(LY<TY&&LX>TX)
        {
            printf("NE\n");
            TY--;
            TX++;
        }
        else if(LY>TY&&LX<TX)
        {
            printf("SW\n");
            TY++;
            TX--;
        }
        else if(LY>TY&&LX>TX)
        {
            printf("SE\n");
            TY++;
            TX++;
        }
        else if(LX>TX&&LY==TY)
        {
            printf("E\n");
            
            TX++;
        }   
        else if(LX<TX&&LY==TY)
        {
            printf("W\n");
            
            TX--;
        }
        else if(LY>TY&&LX==TX)
        {
            printf("S\n");
            TY++;
            
        }
        else if(LY<TY&&LX==TX)
        {
            printf("N\n");
            TY--;
            
        }
        
    }

    return 0;
}
