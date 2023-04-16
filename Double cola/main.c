#include <stdio.h>
#include <stdlib.h>
void cola(int n)
{
    int i;
    char arr[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    while(true)
    {
        for(i=0;i<sizeof(arr);i++)
        {
            for(n=i;n<=i;n++)
            {
                printf("%s",arr[n])
            }
        }
    }
}
int main()
{
    return 0;
}
