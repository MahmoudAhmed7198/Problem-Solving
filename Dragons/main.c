#include <stdio.h>
#include <stdlib.h>
void dragons(int s,int n, int *arr1,int *arr2)
{

   int i;
   for(i=0;i<=n;i++)
   {
       if(i==n)
       {
           printf("YES");
           break;
       }
       if(arr1[i]<=s)
        s+=arr2[i];
       else if(arr1[i+1]<=s)
        s+=arr2[i+1];
       else
       {
          printf("NO");
          break;
       }

   }



}
int main()
{
    int *arr1;
    int *arr2;
    int i,n,s;
    scanf("%i",&s);
    scanf("%i",&n);
    arr1=malloc(n*sizeof(int*));
    arr2=malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        *(arr1+i)=malloc(n*sizeof(int));
        scanf("%i",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        *(arr2+i)=malloc(n*sizeof(int));
        scanf("%i",&arr2[i]);
    }
    dragons(s,n,arr1,arr2);
    return 0;
}
