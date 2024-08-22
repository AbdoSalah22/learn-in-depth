#include <stdio.h>

int main(){
    double mat[10][10], trans[10][10];
    int R, C, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &R);
    printf("Enter number of columns: ");
    scanf("%d", &C);
    for(i = 0; i<R; i++){
        for(j = 0; j<C; j++){
            printf("Enter mat[%d][%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }
    for(i = 0; i<R; i++){
        for(j = 0; j<C; j++){
            trans[j][i] = mat[i][j];
        }
    }
    for(i = 0; i<C; i++){
        for(j = 0; j<R; j++){
            printf("%.2lf\t", trans[i][j]);
        }
        printf("\r\n");
    }
    
    return 0;
}