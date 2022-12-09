#include<stdio.h>

int main(){
    int x,y,p,q, select;
    printf("Enter number of rows & columns for 1st matrix : ");
    scanf("%d %d", &x, &y);
    printf("Enter number of rows & columns for 2nd matrix : ");
    scanf("%d %d", &p, &q);
    int a[x][y], b[p][q], mat_sum[x][y], mat_sub[x][y];
    printf("\n ------------------------------------\n");
    printf("Matrix : 1\n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("a%d%d : ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\n ------------------------------------\n");
    printf("Matrix : 2\n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            printf("b%d%d : ", i+1,j+1);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    selection:
    printf("Select one :\n1)Matrix Sum \t 2)Matrix Sub\n: ");
    scanf("%d", &select);

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            mat_sum[i][j]=a[i][j]+b[i][j];
            mat_sub[i][j]=a[i][j]-b[i][j];
        }
    }

    if(x==p && y==q){
        switch(select){
        case 1:
            printf("\n --------------\n");
            for(int i=0; i<x; i++){
                for(int j=0; j<q; j++){
                    printf("| %d ", mat_sum[i][j]);
                }
                printf("|\n --------------\n");
            }
            break;
        case 2:
            printf("\n --------------\n");
            for(int i=0; i<x; i++){
                for(int j=0; j<q; j++){
                    printf("| %d ", mat_sub[i][j]);
                }
                printf("|\n --------------\n");
            }
            break;
        default:
            goto selection;
        }
    }
    else{
        printf("Size of rows and columns did not match\n");
    }

    return 0;
}

