#include <stdio.h>
#include <stdlib.h>
int binarysearch(int arr[],int start,int end,int item)
{
    if(start>end)
        return;
    int mid=(start+end)/2;
    if(item == arr[mid])
        return mid;
    else if(item > arr[mid])
        return binarysearch(arr,mid+1,end,item);
    else if(item < arr[mid])
        return binarysearch(arr,start,mid-1,item);


}
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%i",&size);
    int arr[size];
    int i;
    printf("Enter the array items : \n");
    for(i=0;i<size;i++)
    {
        scanf("%i",&arr[i]);
    }
    int item;
    printf("Enter the item : ");
    scanf("%i",&item);
    printf("%i",binarysearch(arr,0,size-1,item));

    return 0;
}
