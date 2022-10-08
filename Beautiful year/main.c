#include <stdio.h>
#include <stdlib.h>
void year(int n)
{
   int new_n=n;
   int tmp1=n%10;
   n=n/10;
   int tmp2=n%10;
   n=n/10;
   int tmp3=n%10;
   n=n/10;
   int tmp4=n%10;
   n=n/10;
   if((tmp1 != tmp2 && tmp1 != tmp3&& tmp1!=tmp4 && tmp2!=tmp3 && tmp2!=tmp4 &&tmp3!=tmp4))
    printf("%i",++new_n);
   else
    new_n++;




}
int main()
{
    int n;
    scanf("%i",&n);
    year(n);
    return 0;
}
