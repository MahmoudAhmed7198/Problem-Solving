#include <stdio.h>
#include <stdlib.h>
void character(int t,int *arr,int str_arr,int int_arr,int exp_arr)

{
    int i,j,k;
    int *point_arr;
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=1;k<=arr[2];k++)
            {
                while(arr[2]>0)
                {
               arr[0]+=1;
               arr[1]+=1;
               arr[2]-=2;
               if(arr[0]>arr[1])
                 point_arr[i]+=1;
                 else
                    arr[0]+=1;
                 arr[2]-=2;
                }


            }

        }


    }
    printf("%i",point_arr);
}
int main()
{
    int i,j
    int t;
    int *arr;
    int str_arr;
    int int_arr;
    int exp_arr;
    scanf("%i",&t);
    arr=malloc(t*sizeof(int*));
    for(i=0;i<T;i++)
    {
    for(j=0;j<3;j++)
    {
        scanf("%i",&str_arr);
        continue;
        scanf("%i",&int_arr);
        continue;
        scanf("%i",&exp_arr);
    }

    }
    character(t,arr,str_arr,int_arr,exp_arr);
    return 0;
}
