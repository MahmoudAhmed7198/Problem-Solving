#include <stdio.h>
#include <stdlib.h>
int divisible_sum_pairs(int *arr,int n,int k)
{
    int i,j;
    int counter=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])%k==0)
            {
                counter+=1;
            }
            else
                continue;
        }
    }
    return counter;
}
int main()
{
    int *arr;
    int n,k,i;
    scanf("%i",&n);
    scanf("%i",&k);
    arr=malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }
    printf("%i",divisible_sum_pairs(arr,n,k));

    return 0;
}
