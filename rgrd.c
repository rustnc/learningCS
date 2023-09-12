#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int rows = get_int("rows:");
    int cols = get_int("cols");
    for (int i =1; i<=rows; i++)
    {
        for (int j=1; j<=cols; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}