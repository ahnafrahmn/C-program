#include <stdio.h>

    // Voting System.


char name1[] = "Rahat Rahman";
char name2[] = "Mymuna Raiza";
char name3[] = "Asif Bin Azaad";
char name4[] = "Maisha Mahbubur Rahman";

int n=4;
int vote=0;
int votecount[] = {1203, 13554, 1198, 1679};


void display(){
    char sp = ' ';
    printf("\n---------------------------------------------------------------\n\n");
    printf(" Candidate Name \t\t--\t Total Vote Count \n\n");
    printf(" 1) %s  : \t\t\t %d\n", name1, votecount[0]);
    printf(" 2) %s  : \t\t\t %d\n", name2, votecount[1]);
    printf(" 3) %s  : \t\t\t %d\n", name3, votecount[2]);
    printf(" 4) %s  : \t\t %d\n", name4, votecount[3]);
    printf("\n---------------------------------------------------------------\n\n");
    printf("");
    printf("");
}

void lead(){
    int i, j, max=votecount[0];
    for(i=1; i<n; i++){
        if(max < votecount[i]){
            max = votecount[i];
            j = i+1;
        }
    }
    printf("\n Maximum vote count is %d \n", max);
    switch(j){
        case 1:
            printf(" Leading candidate is : %s ( %d votes )\n\n", name1, max);
            break;
        case 2:
            printf(" Leading candidate is : %s ( %d votes )\n\n", name2, max);
            break;
        case 3:
            printf(" Leading candidate is : %s ( %d votes )\n\n", name3, max);
            break;
        case 4:
            printf(" Leading candidate is : %s ( %d votes )\n\n", name4, max);
            break;

    }
    selection();
}

void selection(){
    int opt, cand_choice;
    select:
    printf(" Select :\n 1) Vote \t 2) Leading Candidate \t 3) Exit \n : ");
    scanf("%d", &opt);
    if(opt<=3 && opt>0){
        if(opt==1){
            vote++;
            if(vote>1){
                printf("\n\t You have given your vote already.\n");
                goto select;
            } else{
                choice:
                printf("\n Select a candidate : \n");
                printf(" 1) %s \n 2) %s \n 3) %s \n 4) %s \n : ", name1, name2, name3, name4);
                scanf("%d", &cand_choice);
                if(cand_choice<=4 && cand_choice>0){
                    if(cand_choice==1){
                        votecount[0]++;
                        display();
                        goto select;
                    } else if(cand_choice==2){
                        votecount[1]++;
                        display();
                        goto select;
                    } else if(cand_choice==3){
                        votecount[2]++;
                        display();
                        goto select;
                    } else if(cand_choice==4){
                        votecount[3]++;
                        display();
                        goto select;
                    }
                } else{
                    printf(" Please select again. \n");
                    goto choice;
                }
            }
        } else if(opt==2){
            lead();
        } else if(opt==3){
            printf("\n\t Thank you so much for giving your precious vote.\n");
        }
    } else{
        printf(" Please select again. \n");
        goto select;
    }
}

void main(){

    printf("\n\t\t\t VOTING SYSTEM \t\t\t\n");
    display();
    selection();

}
