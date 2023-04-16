#include <stdio.h>
#include <stdlib.h>
int n=0;
int diagonal_difference(int **arr)
{
    int sumofleft=0;
  int sumofright=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            if(j==i)
                sumofleft+=arr[i][j];

        }
        printf("\n");

    }
     int tmp=sumofleft;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j || (i==0 && j==n-1) || (i==1 && j==n-2) || (i==n-1 && j==0))
            sumofright+=arr[i][j];
    }
    printf("\n");
}
int tmp2=sumofright;

return(tmp > tmp2 ? tmp-tmp2 : tmp2-tmp);
}
int main()
{
   int i,j;

    int **arr;
   printf("Enter the number of rows and columns:");
   scanf("%i",&n);
   arr=malloc(n*sizeof(int*));
   for(i=0;i<n;i++)
   {
       *(arr+i)=malloc(n*sizeof(int));
       for(j=0;j<n;j++)
       {
           *(arr+j)=malloc(n*sizeof(int));
           scanf("%i",&arr[i][j]);
       }
        printf("\n");
   }
   printf("%i",diagonal_difference(arr));




    return 0;
}
