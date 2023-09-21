#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char *first = get_string("first: ");
    char *second = get_string("second: ");

    int flag =1;
    int i=0;
    int counter=0;

    while (flag)
    {
        if (*(first+i)!=*(second+i))
        {
            printf("Not Same\n");
            flag=0;
        }
        else if ((*(first+i)=='\0') && (*(second+i)=='\0'))
        {
            printf("Same\n");
            flag=0;
        }
        i++;
    }
}