//This Program will allow users to enter creditcard info and cheak if its fake or not.
#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main (void){
    printf("Number: ");
    long long card= GetLongLong();
    if(card/10000000000000==34 || card/10000000000000==37){
        printf("AMEX\n");
    }
    else if(card/100000000000000>=51 && card/100000000000000<=55){
        printf("MASTERCARD\n");
    }
    else if(card/1000000000000==4||card/10000000000000==4||card/100000000000000==4||card/1000000000000000==4){
        printf("VISA\n");
    }
    else{
        printf("INVALID\n");
    }
}
