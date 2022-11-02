#include<stdio.h>
int main(){
    int n;
    printf("Input N=");
    scanf("%d",&n);
    int i = 1;
    float ans = 0;
    int number;
    while(1){
        printf("Input number%d=",i);
        scanf("%d",&number);
        ans += number;
        if(i>=n){break;};
        i++;
    }
    printf("Average=%f",ans/n);
}