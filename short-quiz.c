#include<stdio.h>

char ques1[] = "\n A) What planet is closest to the sun? \n\n 1) Venus \t 2) Mercury \n 3) Saturn \t 4) Neptune \n : ";    //2. Mercury
char ques2[] = "\n B) How many hearts does an octopus have? \n\n 1) 1 \t 2) 2 \n 3) 3 \t 4) 4 \n : "; //3. 3
char ques3[] = "\n C) Where is the strongest human muscle located? \n\n 1) Knee \t 2) Thigh \n 3) Arm \t 4) Jaw \n : "; //4. Jaw
char ques4[] = "\n D) What country has the highest life expectancy? \n\n 1) Hong Kong \t 2) Singapore \n 3) USA \t 4) UK \n : "; //1.  Hong Kong
char ques5[] = "\n E) What year was the United Nations established? \n\n 1) 1945 \t 2) 1947 \n 3) 1944 \t 4) 1942 \n : ";    //1. 1945
char ques6[] = "\n F) What country drinks the most coffee per capita? \n\n 1) England \t 2) Iceland \n 3) Finland \t 4) France \n : ";  //3. Finland
char ques7[] = "\n G) How many bones do we have in an ear? \n\n 1) 6 \t 2) 2 \n 3) 1 \t 4) 3 \n : "; //4. 3
char ques8[] = "\n H) Where did sushi originate? \n\n 1) Korea \t 2) Japan \n 3) China \t 4) Hong Kong \n : ";   //3. China
char ques9[] = "\n I) What country has won the most World Cups? \n\n 1) Brazil \t 2) Argentina \n 3) Portugal \t 4) France \n : ";    //1. Brazil
char ques10[] = "\n J) Who is Father of physics? \n\n 1) Albert Einstien \t 2) Galileo Galilei \n 3) Newton \t\t 4) Tesla \n : ";    //2. Galileo Galilei

int size = 10;
int correct_ans[] = {2, 3, 4, 1, 1, 3, 4, 3, 1, 2};
int test_ans[];
int point=0;

int check(){
    int a;
    for(a=0; a<size; a++){
        if(correct_ans[a]==test_ans[a]){
            point++;
        }
    }
    return point;
}

void main(){
    printf("\n \t\t\t Short Quiz \n \t\t\t ----------\n\n");
    printf("%s", ques1);
    scanf("%d", &test_ans[0]);
    printf("%s", ques2);
    scanf("%d", &test_ans[1]);
    printf("%s", ques3);
    scanf("%d", &test_ans[2]);
    printf("%s", ques4);
    scanf("%d", &test_ans[3]);
    printf("%s", ques5);
    scanf("%d", &test_ans[4]);
    printf("%s", ques6);
    scanf("%d", &test_ans[5]);
    printf("%s", ques7);
    scanf("%d", &test_ans[6]);
    printf("%s", ques8);
    scanf("%d", &test_ans[7]);
    printf("%s", ques9);
    scanf("%d", &test_ans[8]);
    printf("%s", ques10);
    scanf("%d", &test_ans[9]);

    system("cls");
    printf("\n \t\t\t Short Quiz Result \n \t\t\t -----------------\n\n");
    printf(" You got %d out of %d \n\n", check(), size);
}
