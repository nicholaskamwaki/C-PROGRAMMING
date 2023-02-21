//cube of a number
#include<stdio.h>
int main()
{int i,n;
printf("input number of terms :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("Number is : %d and cube of the 1 is :%d\n",i,(i*i*i));
}
return 0;
}