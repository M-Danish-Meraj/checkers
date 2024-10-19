#include <stdio.h>
int main()
{
      printf(" A B C D E F G H\n");
    for(int row=0;row<8;row++)
    {
        printf("%d ",row+1);
            for (int  col = 0; col < 8; col++)
                {
            if(row <= 2 && (row + col) % 2 == 1)
                printf("\033[31mR\033[0m"); 
            else if(row >= 5 && (row + col) % 2 == 1)
                printf("\033[34mB\033[0m");
            else {
                printf("  ");}
                }
         printf("\n");
    }
    return 0;
}

