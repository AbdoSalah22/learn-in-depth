#include <stdio.h>

int main(){
    double mat1[2][2];
    double mat2[2][2];
    double sum[2][2];
    int i, j;

    printf("Enter First Matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter mat1[%d][%d]: ", i, j);
            scanf("%lf", &mat1[i][j]);
        }
    }

    printf("Enter Second Matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter mat2[%d][%d]: ", i, j);
            scanf("%lf", &mat2[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%.2lf\t", sum[i][j]);
        }
        printf("\r\n");
    }
    
    return 0;
}