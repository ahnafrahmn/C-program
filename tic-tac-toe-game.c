#include <stdio.h>

int count = 0;
char player1[50];
char player2[50];

int display(char arr[3][3]){
    int sampleboard[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int i ,j, opt;

    printf("\n\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("  %c  |", arr[i][j]);
        }
        printf("\b ");
        if(i<2){
            printf("\n------------------\n");
        }
    }
    printf("\n");
    position1:
    printf("\n Player-1, Put your (X) on : ");
    scanf("%d", &opt);

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
             if(opt==sampleboard[i][j]){
                arr[i][j] = 'X';
                count++;
            }
        }
    }
    if(arr[0][0]=='X' && ((arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2])
                          || (arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2])
                          || (arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0])
                          || (arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2])
                          || (arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])
                          || (arr[1][0]==arr[1][1] && arr[1][1]==arr[2][0])
                          || (arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1])
                          || (arr[1][0]==arr[1][1] && arr[1][1]==arr[2][2]))){
        system("CLS");
        printf("\n\n %s you win!\n\n", player1);
        return 0;
    }

    system("CLS");

    printf("\n\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("  %c  |", arr[i][j]);
        }
        printf("\b ");
        if(i<2){
            printf("\n------------------\n");
        }
    }
    printf("\n");
    position2:
    printf("\n Player-2, Put your (O) on : ");
    scanf("%d", &opt);

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(opt==sampleboard[i][j]){
                arr[i][j] = 'O';
                count++;
            }
        }
    }
    if(arr[0][0]=='O' && ((arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2])
                          || (arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2])
                          || (arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0])
                          || (arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2])
                          || (arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])
                          || (arr[1][0]==arr[1][1] && arr[1][1]==arr[2][0])
                          || (arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1])
                          || (arr[1][0]==arr[1][1] && arr[1][1]==arr[2][2]))){
        system("CLS");
        printf("\n\n %s you win!\n\n", player2);
        return 0;
    }
    if(count<9){
        display(arr);
    } else{
        printf("\n Nobody won the match!!\n");
        return 0;
    }

}

void main(){
    char board[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};

    printf("\n Player-1 (X), Please enter your name : ");
    gets(player1);
    printf("\n Player-2 (O), Please enter your name : ");
    gets(player2);
    display(board);

}
