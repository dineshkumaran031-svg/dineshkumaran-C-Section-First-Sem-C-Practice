#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year%400==0 || year%4==0 || year%100==0){
    printf("it is a leapyear");
    }
    else {
    printf("it is not a leap year");
    }
    return 0;
    }
