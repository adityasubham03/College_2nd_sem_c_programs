//Adding 2 matrices and subtracting them
#include<stdio.h>

int main(){

    int n[4][4],a[4][4],b[4][4],c[4][4];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the number for 1st matrix: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("The sum of 2 matrices is:- ");

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the number for 2nd matrix: ");
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            b[i][j]=(a[i][j]+n[i][j]);
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("The substraction of 2 matrices is:-\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            c[i][j]=(a[i][j]-n[i][j]);
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}