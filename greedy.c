#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    float change;
    int count = 0;
    printf("O hai! How much change is owed?\n");
    change = GetFloat();
    while (change<=0){
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    while (change>=.245){
        change-=.25;
        count++;
    }
    while (change>=.095){
        change-=.1;
        count++;
    }
    while (change>=.045){
        change-=.05;
        count++;
    }
    while (change>=.005){
        change-=.01;
        count++;
    }
    printf("%d\n", count);
    return 0;
    
}

