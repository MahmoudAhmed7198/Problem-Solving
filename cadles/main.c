#include <stdio.h>
#include <stdlib.h>

int birthday(int arr_count,int *arr)
{
    int i;
    int max=0;
    int number_of_candles=0;
    for(i=0;i<arr_count;i++)
    {
        if(arr[i+1]>arr[i])
        {
            max=arr[i+1];
        }

    }
    for(i=0;i<arr_count;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    for(i=0;i<arr_count;i++)
    {
        if(max==arr[i])
        {
            number_of_candles++;
        }

    }
    return number_of_candles;

}
int main()
{
    int *arr;
    int arr_count;
    int i;
    printf("Enter the number of candles:");
    scanf("%i",&arr_count);
    arr=malloc(arr_count*sizeof(int*));
    for(i=0;i<arr_count;i++)
    {
        *(arr+i)=malloc(arr_count*sizeof(int));
        scanf("%i",&arr[i]);
    }
    printf("the number of candles that can be blown is: %i",birthday(arr_count,arr));

    return 0;
}
