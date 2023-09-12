#include <stdio.h>
#include <cs50.h>

// asks user for # of scores, asks user to enter each score, and stores it in an array, prints out avg
int main (void)
{
    int n = get_int(" how many scoreS:");
    int scores[n];



    float average=0;
    for (int i=0; i<n; i++)
    {
        scores[i]=get_int("enter %i score: ", i+1);
        average=average+scores[i]/(float)n;
    }
    printf(" the average score is %.5f\n",average);
}