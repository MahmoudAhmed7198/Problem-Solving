#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void cat_and_mouse(int x,int y,int z,int q)
{
    int i;
    for(i=1;i<=q*3;i++)
    {
        if(i==)
        {
            if(abs(x-z)>abs(y-z)){
                printf("Cat B\n");
                continue;
            }
            else if(abs(x-z)<abs(y-z))
            {
                printf("Cat A\n");
                continue;
            }
            else
            {
                printf("Mouse C\n");
                continue;
            }
        }
        else
            continue;


    }

}
int main()
{
    int q,x,y,z;
    printf("Enter the number of quires:");
    scanf("%i",&q);
    printf("Enter the three positions:\n");
    scanf("%i%i%i",&x,&y,&z);
    cat_and_mouse(x,y,z,q);


    return 0;
}
