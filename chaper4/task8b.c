#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int get_random_score(unsigned seed){
    srand(seed);
    int score = rand()%101;
    return score;
}

int main(){
    int students_num;
    printf("input number of students in Class =");
    scanf("%d",&students_num);

    int points;
    int sum = 0;
    int i;
    for(i=1;i<=students_num;i++){
        points = get_random_score(time(NULL));
        printf("student1's point :%d\n",points);
        sum = sum + points;
    };
    float ans = (float)sum/(float)students_num;
    printf("Average point=%f\n",ans);
    return 0;
}