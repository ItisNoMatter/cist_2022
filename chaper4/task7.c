#include<stdio.h>
int main(){
    int students_num;
    printf("input number of students in Class =");
    scanf("%d",&students_num);

    int sum = 0;
    int varid_score_num = 0;

    for(int i=1;i<=students_num;i++){
        int points;
        printf("input points of Student%d=",i);
        scanf("%d",&points);
        if(points>0){
            sum = sum + points;
            varid_score_num ++;
        }    
    };
    float ans = (float)sum/(float)varid_score_num;
    printf("Average point=%f\n",ans);
    return 0;
}