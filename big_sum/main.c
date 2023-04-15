#include <stdio.h>
#include <stdlib.h>
typedef long long int u64;
 u64 big_sum( u64 arr[],u64 size_OF)
{
    u64 sum=0;
     u64 i;
    for(i=0;i<size_OF;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
     u64 size;
     scanf("%lld",&size);
     u64 arr[size];
     u64 i;

    for(i=0;i<size;i++)
    {
        scanf("%lld",&arr[i]);
    }
   printf("%lld", big_sum(arr,size));
    return 0;
}
