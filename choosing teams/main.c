#include <stdio.h>
#include <stdlib.h>
void teams(int *arr,int n,int k)
{
    int counter=0;
    int no_of_teams=0;
    int i;
    for(i=0;i<n;i++)
    {
        if((arr[i]+k)<=5)
        {
            counter+=1;
            if(counter%3==0)
            {
                no_of_teams+=1;
                continue;
            }
            else
              continue;
        }
        else
            continue;

    }
    printf("%i",no_of_teams);
}
int main()
{
    int *arr;
    int n,k;
    int i;
    scanf("%i",&n);
    scanf("%i",&k);
    arr= malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }
    teams(arr,n,k);

    return 0;
}
