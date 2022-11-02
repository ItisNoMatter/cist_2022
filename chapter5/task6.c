#include<stdio.h>
int main(){
    int i = 0;
    float ans = 0;
    int number;
    while(1){
        printf("Input number%d=",i+1);
        scanf("%d",&number);
        if(number<0){break;};
        ans += number;
        i++;
    }
    if(i==0){
        printf("\x1b[31m");
        printf("INVARID INPUT!\n");
        return 0;
    }
    printf("Average=%f",ans/i);
}