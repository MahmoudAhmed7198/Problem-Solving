#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int*y)
{
    int tmp =*x;
    *x=*y;
    *y=tmp;
}
void bubble_sort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1])
        swap(&arr[j],&arr[j+1]);
}
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%i ",arr[i]);
    }
}


int main()
{

    int i;
    int n;
    printf("Enter the size of array : ");
    scanf("%i",&n);
    int arr[n];
    printf("Enter the elements of the array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }
    printf("the array that sorted using bubble : \n");
    bubble_sort(arr,n);
    display(arr,n);
    return 0;
}
