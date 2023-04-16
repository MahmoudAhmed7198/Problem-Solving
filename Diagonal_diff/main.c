#include <stdio.h>
#include <stdlib.h>

int diagonal_Difference(int arr_row,int arr_col,int **arr)
{
    int i,j;
    int sumofleft=0;
    int sumofright=0;
    for(i=0;i<arr_row;i++)
    {
        for(j=0;j<arr_col;j++)
        {
            if(i==j)
            {
                sumofleft+=arr[i][j];
            }
        }

        printf("\n");
    }
    for(i=0;i<arr_row;i++)
    {
        for(j=0;j<arr_col;j++)
        {
            if(i==j || (i==0 && j==arr_col-1) || (i==1 && j==arr_col-2) || (i==arr_row-1 && j==0))
                sumofright+=arr[i][j];
        }
    }
    return (sumofleft > sumofright ? sumofleft-sumofright : sumofright-sumofleft);
}


int main()
{
    int arr_row,arr_col;
    int **arr;
    int i,j;
    printf("Enter the size of row :");
    scanf("%i",&arr_row);
    printf("Enter the size of col :");
    scanf("%i",&arr_col);
    arr=(int **)malloc(arr_row*arr_col*sizeof(int));
    printf("Enter the array elements \n");

    for(i=0;i<arr_row;i++)
    {
        for(j=0;j<arr_col;j++)
        {
            scanf("%i",&arr[i][j]);
        }
        printf("\n");
    }
    printf("the sum of left diagonal is %i",diagonal_Difference(arr_row,arr_col,arr));
    return 0;
}
