#include <stdio.h>
#include <stdlib.h>
void orange_juice(int number_of_juices,int *arr)
{
    int i;
     double volume_fraction=0.0;
    for(i=0;i<number_of_juices;i++)
    {
        volume_fraction+=(double)arr[i]/number_of_juices;
    }
    printf("%f",volume_fraction);

}
int main()
{
    int i;
    int *arr;
    int number_of_juices;
    scanf("%i",&number_of_juices);
    arr=malloc(number_of_juices*sizeof(int *));
    for(i=0;i<number_of_juices;i++)
    {
        *(arr+i)=malloc(number_of_juices*sizeof(int));
        scanf("%i",&arr[i]);
    }
    orange_juice(number_of_juices,arr);

    return 0;
}
