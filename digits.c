#include <cs50.h>
#include <stdio.h>
#include <stdbool.h> 
int numdigits(long n);
int last_digit(int n);

int main (void)
{
    long n = get_long (" number: ");

    // get number of digits

    int num = numdigits(n);

    // initialize array to store digits
    int digits[num];

    // loop to fill array with digits (fn that outputs 1) new number 2) last digit)
    for (int i=0; i<num; i++)
    {
        digits[i]=last_digit(n);
        n=n/10;
    }
    for (int i=0; i<num; i++)
    {
        printf("%i\n",digits[i]);
    }
    printf(" the number of digits = %i\n", num);

}

int numdigits(long n)
{
    bool flag = 1;
    int counter=0;
    while (flag)
    {
        long x = n/10;
        n =x;
        counter++;
        if (n==0)
        {
            flag=0;
        }

    }
    return counter;
}

int last_digit(int n)
{
    return n-(n/10)*10;
}