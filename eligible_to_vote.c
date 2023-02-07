//program to show a person is eligible to vote
#include<stdio.h>
int main () {
    int age ,citizenship;
    
    printf("Enter your age in years and citizenship : ");
    scanf("%d%d",&age,&citizenship);
    if(age > 18 &&citizenship);
    {
        printf("you are eligible to vote");
    }
    else {
        printf(" you are not eligible to vote :");
    }
    return 0;
}
