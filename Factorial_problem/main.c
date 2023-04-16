#include <stdio.h>
#include <stdlib.h>
//factorial using loop
/*int factorial(int number)
{
    if(number == 0 || number ==1)
        return 1;

    int i;
    int fact=1;
    for(i=1;i<=number;i++)
    {
        fact*=i;
    }
    return fact;
}*/
//factorial using recursion
int factorial(int number)
{
    if(number==0)
        return 1;
    else
        return(number * factorial(number-1));
}
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%i",&number);
    printf("the factorial of %i is : %i ",number,factorial(number));

    return 0;
}
