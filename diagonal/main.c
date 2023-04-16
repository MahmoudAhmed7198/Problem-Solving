#include <stdio.h>
#include <stdlib.h>
int n;
int diagonal_difference(int **arr)
{
     int i,j;
    int sumofleft=0;
    int sumofright=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                sumofleft+=arr[i][j];
        }
        printf("\n");
    }


        for(i=0;i<n;i++)
        {
            sumofright+=arr[i][2-i];
        }
    return abs(sumofleft-sumofright);
}
int main()
{
    int i,j;
    int **arr;

    scanf("%i",&n);
    arr=malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {*(arr+i)=malloc(n*sizeof(int));
        for(j=0;j<n;j++)
            scanf("%i",&arr[i][j]);
    }
    printf("%i",diagonal_difference(arr));


    return 0;
}
