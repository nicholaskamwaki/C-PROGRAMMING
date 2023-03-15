//array to print 3*3 matrix
#include<stdio.h>
void main ()
{ 
    int i,j;
    int matrix[3][3]={100,200,300,200,150,50,350,300,600};
    printf("\n The 9 elements of 3*3 matrix is:");
    printf("\n");
    for (i=0;i<3;i++)
           {
           for(j=0;j<3;i++)
           printf("%d\t",matrix[i][j]);
     printf("\n");
     }
}
