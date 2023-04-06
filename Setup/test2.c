//nested if else
#include<stdio.h>
int main()
{
    int taka;
    scanf("%d",&taka);
    if(taka>=100)
    {
        printf("Askey biri kaboo must\n");
        if(taka==110)
        {
            printf("With tea");

        }
        else
        {
            printf("Only biri");
        }
    }
    else if(taka<50)
    {
        printf("Derby khabo taka kom amr");
    }
    else
    {
        printf("Askey biri kaboo nah");
    
    }
    return 0;
}