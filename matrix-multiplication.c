#include<stdio.h>

int main(){
    int x,y,p,q, sum=0;
    printf("Enter number of rows & columns for 1st matrix : ");
    scanf("%d %d", &x, &y);
    printf("Enter number of rows & columns for 2nd matrix : ");
    scanf("%d %d", &p, &q);
    int a[x][y], b[p][q], multi[x][q];
    printf("\n------------------------------------\n");
    printf("Matrix : 1\n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("a%d%d : ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\n------------------------------------\n");
    printf("Matrix : 2\n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            printf("b%d%d : ", i+1,j+1);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }


    if(y==p){
        printf("\n\n");
        for(int i=0; i<x; i++){

            for(int j=0; j<x; j++){
                sum = 0;
                for(int k=0; k<q; k++){
                    sum += a[i][k]*b[k][j];
                }
                multi[i][j] = sum;
            }

        }
        printf("\n--------------\n");
        for(int i=0; i<x; i++){
            for(int j=0; j<q; j++){
                printf("| %d ", multi[i][j]);
            }
            printf("|\n--------------\n");
        }
    }
    return 0;
}
