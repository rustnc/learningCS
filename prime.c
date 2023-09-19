#include <stdio.h>
#include <cs50.h>
int check_prime(int number);
int main (void)
{
    int min = get_int ("Minimum: ");
    int max = get_int ("Maximum: ");

    int current_number =min;
    int counter=0;

    while (current_number <=max)
    {
        int isprime=check_prime(current_number);
        current_number++;
        if (isprime==1)
        {
            counter++;
        }
    }
    printf(" the total number of primes in this range are %i\n",counter);

}

int check_prime(int number)
{
    int divisor=2;
    int flag=1;
    while (divisor<=(number/2))
    {
        if (number%divisor==0)
        {
            flag=0;
            return 0;
        }
        else
        {
            divisor++;
        }
        
    }
    if (flag && number !=1)
    {
        printf("%i\n",number);
        return 1;
    }
    return 0;
    
}