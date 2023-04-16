#include <stdio.h>
#include <stdlib.h>
int arr[5]={1,2,3,4,5,};
void distance(int x)
{
    int minimum_no_of_steps=0;
   int i,j;
   for(i=0;i<5;i++)
   {
       if(arr[i]==x)
        minimum_no_of_steps+=1;
        else
            continue;
       else
       {
           for(j=i+1;j<5;j++)
           {
               if(arr[i]+arr[j]==x)
                minimum_no_of_steps+=2;
                else if(arr[i]+arr[j]+arr[j+1]==x)
                    minimum_no_of_steps+=3;
                else if(arr[i]+arr[j]+arr[j+1]+arr[j+2]==x)
                    minimum_no_of_steps+=4;
                else if(arr[i]+arr[j]+arr[j+1]+arr[j+2]+arr[j+3]==x)
                minimum_no_of_steps+=5;

           }

       }


   }
   printf("%i",minimum_no_of_steps);
}
int main()
{
    int x;
    scanf("%i",&x);
    distance(x);

    return 0;
}
