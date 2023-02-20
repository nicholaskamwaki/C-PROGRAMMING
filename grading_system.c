//grading system
#include<stdio.h>
int main (){
    int maths,eng,kisw,avg;
    printf("enter marks for math,eng,kisw");
    scanf("%d%d%d",&maths,&eng,&kisw);
    avg=(maths+eng+kisw)/3;
    if (avg>=70&& avg<=100){
        printf("grade A");
    }
  else if (avg>=60&& avg<=69){
       printf("grade B");
   }
  else if(avg>=50&& avg<=59){
       printf("grade C");
   }
   else if(avg>=40&& avg<=49){
       printf("grade D");
   }
   else
   printf("fail");
   return 0;
   }