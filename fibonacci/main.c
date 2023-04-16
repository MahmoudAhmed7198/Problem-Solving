#include <stdio.h>
#include <stdlib.h>
int fib(int index)
{

     if (index ==0 || index == 1)
        return 1;
        int prevPrev = 0;
        int prev = 1;
        int result = 0;

        for (int i = 2; i <= index+1; i++)
        {
            result = prev + prevPrev;
            prevPrev = prev;
            prev = result;
        }
        return result;


}
int main()
{
    int n;
    scanf("%i",&n);
    printf("%i",fib(n));
    return 0;
}
