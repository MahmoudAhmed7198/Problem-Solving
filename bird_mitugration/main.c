#include <stdio.h>
#include <stdlib.h>
int bird(int *arr,int n)
{
    int i,j;
    int counter=1;
    int number=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if (arr[i]==arr[j])
        {
            counter+=1;
            number=arr[i];
        }
        else
            continue;
        }


    }
}
int main()
{
    return 0;
}
