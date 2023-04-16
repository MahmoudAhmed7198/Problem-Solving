#include <stdio.h>
#include <stdlib.h>
int get_sum(int arr[],int n)
{
    int sum=0;
    int i;
       for(i=0;i<n;i++)
        {
          sum+=arr[i];

        }
        return sum;
}
int main()
{
    int i;
    int n;
    printf("Enter the size of array :");
    scanf("%i",&n);
    int arr[n];
    printf("Enter the elements of the array \n");
    for(i=0;i<n;i++);
    {
        scanf("%i",&arr[i]);
    }
    printf("the sum of eleemnts is : %i",get_sum(arr,n));
    return 0;
}
