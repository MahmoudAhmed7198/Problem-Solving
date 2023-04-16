#include <stdio.h>
#include <stdlib.h>
void exchange( int n,int d,int e)
{
    int dollar[7]={1,2,5,10,20,50,100};
    int euro[7]={5,10,50,100,200};
    int i;
    for(i=0;i<7;i++)
    {
        if(euro[i]*e<n)
        {
            n=n-euro[i]*e;
        }
    }
    for(i=0;i<7;i++)
    {
         if(dollar[i]*d<n)
        {
             n=n-dollar[i]*d;

        }
    }

    printf("%i",n);


}
int main()
{
    int n,d,e;
    scanf("%i%i%i",&n,&d,&e);
    exchange(n,d,e);
    return 0;
}
