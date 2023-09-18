#include <stdio.h>
#include <cs50.h>
float split(float b, float t, float ti);
int main (void)
{
    float bill = get_float ("Bill before tax and tip: ");
    float tax = get_float("Sales Tax Percent: ");
    float tip = get_float("Tip percent: ");

    float amount=split(bill, tax, tip);
    printf("You will owe $%.2f\n",amount);

}

float split(float b, float t, float ti)
{
    float tax =t/100;
    float tip= ti/100;
    float total_after_tax=b+(b*tax);
    float total = total_after_tax+ (total_after_tax*tip);
    return total/2.00;
}