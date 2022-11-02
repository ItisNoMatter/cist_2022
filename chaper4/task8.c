#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int students_num;
    printf("input number of students in Class =");
    scanf("%d",&students_num);

    int points;
    int sum = 0;
    int i;
    for(i=1;i<=students_num;i++){
        points = rand()%101;
        printf("student1's point :%d\n",points);
        sum = sum + points;
    };
    float ans = (float)sum/(float)students_num;
    printf("Average point=%f\n",ans);
    return 0;
}