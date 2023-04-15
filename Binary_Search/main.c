#include <stdio.h>
#include <stdlib.h>

/*int binary_search(int arr[],int left,int right,int item)
{
   if(right >= left)
   {


    int mid=left + (right-left)/2;
    if(item == arr[mid])
        return mid;
     if (item > arr[mid])
        return (binary_search(arr,mid+1,right,item));
    if (item <arr[mid])
            return (binary_search(arr,left,mid-1,item));

            }
            return -1;
}*/

int main()
{

    int n;
    printf("Enter the size of array : ");
    scanf("%i",&n);
    int arr[n];
    int i;
    printf("Enter the elements of the array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }

    int item;
    printf("Enter the item : ");
    scanf("%i",&item);
    printf("%i",binary_search(arr,0,n-1,item));

    return 0;
}
