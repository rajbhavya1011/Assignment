#include<stdio.h>
void main()
{
    //Task 1: print 2 matrices

    int a[3][3], b[3][3];
    printf("Entry of elements are Row wise\n");
    printf("Enter 1st matrix\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter 2nd matrix\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    //Task 2: addition of two matrices
    printf("Addition of both matrices\n");
    int sum;
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            sum = (a[i][j] + b[i][j]);
            printf("%d ",sum);
        }
        printf("\n");
    }
//Task 3: Finding cofactor of a Matrix
