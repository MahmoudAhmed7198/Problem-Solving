#include <stdio.h>
#include <stdlib.h>
void drink(int no_of_shops,int no_of_days)
{
    int output_arr[]={0};
    int i,j;
     int *arr;
     arr=malloc(no_of_days*no_of_shops*sizeof(int*));
    for(i=0;i<no_of_days;i++)
    {
        for(j=0;j<no_of_shops;j++)
        {
            if(arr[i]>= arr[j])
            {
                output_arr[i]+=1;
            }
            else
            {
                if(j==no_of_shops-1 && output_arr[i]==0)
                {
                    output_arr[i]=0;
                }
                else
                {
                   continue;
                }
            }
        }
    }
    for(i=0;i<no_of_days;i++)
    {
        printf("%i\n",output_arr[i]);
    }
}
int main()
{
    int *arr;
    int *arr1;
    int no_of_days,no_of_shops,i,j;
    printf("Enter the number of shops:");
    scanf("%i",&no_of_shops);
    arr=malloc(no_of_shops*sizeof(int*));
    for(i=0;i<no_of_shops;i++)
        scanf("%i",&arr[i]);
        printf("Enter the number of days:");
        scanf("%i",&no_of_days);
        arr1=malloc(no_of_days*sizeof(int*));
    for(i=0;i<no_of_days;i++)
        scanf("%i",&arr1[i]);
        drink(no_of_shops,no_of_days);


    return 0;
}
