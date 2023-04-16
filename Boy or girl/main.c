#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void chat(char arr[100])
{
    int number_of_char=0;
    int new_no_of_char=0;
    int actual_char=0;
    int i,j;
    for(i=1;i<=sizeof(arr);i++)
    {
        number_of_char+=i;
    }
    for(i=0;i<sizeof(arr);i++)
    {
        for(j=0;j<sizeof(arr);j++)
        {
            if(i==j)
                continue;
            if(arr[i]==arr[j])
                new_no_of_char+=1;
            else if(arr[i]!=arr[j])
                    continue;

        }
    }
    actual_char=number_of_char-new_no_of_char;
    if(actual_char %2==0)
    {
        printf("CHAT WITH HER !");
    }
    else
    {
        printf("IGNORE HIM !");
    }
}
int main()
{
    char arr[100];
    scanf("%s",&arr);
    chat(arr);
    return 0;
}
