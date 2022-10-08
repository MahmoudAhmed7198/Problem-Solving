#include <stdio.h>
#include <stdlib.h>
void chess(int num_of_games_played,char *arr)
{
    int i;
    int anton_count=0;
    int danik_count=0;
    for(i=0;i<num_of_games_played;i++)
    {
        if(arr[i]=='A')
                anton_count++;
            else if(arr[i]=='D')
                danik_count++;


    }
    if(anton_count>danik_count)
        printf("Anton\n");
    else if(danik_count>anton_count)
        printf("Danik\n");
    else if(anton_count==danik_count)
        printf("Friendship");
}
int main()
{
    char*arr;
    int i;
    int number_of_played_games;
    scanf("%i",&number_of_played_games);
    arr=malloc(number_of_played_games*sizeof(int*));
    for(i=0;i<number_of_played_games;i++)
    {
        //*(arr+i)=malloc(number_of_played_games*sizeof(char));
        scanf("%c",&arr[i]);
    }
    chess(number_of_played_games,arr);
    return 0;
}
