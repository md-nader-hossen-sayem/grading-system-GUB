// This program made about grading system using 'else if' .
#include<stdio.h>
int main(){
    int result;
        printf("Enter Your Result: ");
        scanf("%d",&result);
    if(result >= 80 && result <= 100)
        printf("You Get 'A+'-_-");
    else if(result >= 75 && result <= 79)
        printf("You Get 'A'-_-");
    else if(result >= 70 && result <= 74)
        printf("You Get 'A-'-_-");
    else if(result >= 65 && result <= 69)
        printf("You Get 'B+'-_-");
    else if(result >= 60 && result <= 64)
        printf("You Get 'B'-_-");
    else if(result >= 55 && result <= 59)
        printf("You Get 'B-'-_-");
    else if(result >= 50 && result <= 54)
        printf("You Get 'C+'-_-");
    else if(result >= 45 && result <= 49)
        printf("You Get 'C'-_-");
    else if(result >= 40 && result <= 44)
        printf("You Get 'D'-_-");
    else if(result >= 0 && result <= 39)
        printf("You Get 'F'-_-");
    else
        printf("Sorry! Your value is wrong..");
    return 0;}
