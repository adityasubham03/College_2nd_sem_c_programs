#include<stdio.h>

int main(){
    int o,p;
    printf("Enter the order of the matrix: ");
    scanf("%d %d",&o,&p);
  
    int n[o][p],count=0,v;
    int i,j;
    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("Enter the number to create matrix: ");
            scanf("%d",&n[i][j]);
        }
    }

    printf("Original matrix is: \n");

    for(i=0;i<o;i++){
        for(j=0;j<p;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<o;i++){
        v = n[i][i];
        if (v%2!=0)
        {
            count++;
        }
        
    }
    
    for (int i = 0; i < o; i++){
        for (int j = (p-1); j >= 0; j--)
        {
            v = n[j][i];
            if (v%2!=0)
            {
                count++;
            }
        }
        
    }
    printf("Matrix diagonal element has %d odd numbers!",count);
     return 0;
    }