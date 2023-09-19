#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int score1=72;
    int score2=73;
    int score3=33;

    printf("the average score is: %.2f\n", (score1+score2+score3)/3.0);

    printf("score1 address: %p, score2 address: %p, score3 address: %p\n", &score1, &score2, &score3);

    printf("%c%c%c\n",*&score1,*&score2,*&score3);
}

//note that the addresses are decreasing- the reason is that the variables are stored in stack
//which flows in the decreasing memory addresses on the system where the code was run
//stack-heap