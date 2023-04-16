#include <stdio.h>
#include <stdlib.h>
void free_rooms(int n,int *arr,int *arr1)
{
    int number_of_living_rooms=0;
    int p;
        for(p=0;p<n;p++)
       {
               if(arr1[p]-arr[p]>=2)
                number_of_living_rooms+=1;


       }
       printf("%i",number_of_living_rooms);
}
int main()
{
    int n,p;
    int *arr;
    int *arr1;
    scanf("%i",&n);
    arr=malloc(n*sizeof(int *));
    arr1=malloc(n*sizeof(int *));
    for(p=0;p<n;p++)
    {
          scanf("%i",&arr[p]);
          scanf("%i",&arr1[p]);

    }


    free_rooms(n,arr,arr1);



    return 0;
}
