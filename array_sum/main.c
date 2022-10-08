#include <stdio.h>
#include <stdlib.h>
//typedef long long u64;
long  big_sum(  long arr[], long size)
{
    long  i;
    long  summation=0;
    for(i=0;i<size;i++)
    {
        summation+=arr[i];
    }
    return summation;
}
int main()
{
     long size;
    long arr[size];
       long i;
      printf("Enter the size of array : ");
      scanf("%ld",&size);
      printf("Enter the elements of the array \n");
      for(i=0;i<size;i++)
      {
          scanf("%ld",&arr[i]);
      }
      printf("%ld",big_sum(arr,size));
    return 0;
}
