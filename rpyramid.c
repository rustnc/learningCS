#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int size = get_int ("size:");
    for (int i =1; i<=size; i++)
    {
        int j = size-i;
        for (int space=1; space<=j; space++)
        {
            printf(" ");
        }
        for (int mod =1; mod<=i; mod++)
        {
            printf("#");
        }
        printf("\n");
    }
}