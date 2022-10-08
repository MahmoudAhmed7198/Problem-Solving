#include <stdio.h>
#include <stdlib.h>

void compare_triplets(int a[3],int b[3])
{
    int i;
    int result[2]={0};
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
           result[0]++;
        }
        else if(a[i]<b[i])
        {
            result[1]++;
        }
        else
            continue;

    }
    for(i=0;i<2;i++)
    {
        printf("%i ",result[i]);
    }

}
int main()
{
    int a[3],b[3];
    int result[2];
    int i;
    printf("Enter the points of alice :\n");
    for(i=0;i<3;i++)
    {
        scanf("%i",&a[i]);
    }
    printf("Enter the points of bob :\n");
    for(i=0;i<3;i++)
    {
        scanf("%i",&b[i]);
    }
    compare_triplets(a,b);





    return 0;
}
