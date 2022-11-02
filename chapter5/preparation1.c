#include<stdio.h>
int main(){
    int s,i,n;
    printf("Input N:");
    scanf("%d",&n);
    i = 1;
    s = 0;
    while(i<=n){
        s += i;
        i++;
    };
    printf("Answer:%d",s*-1);
}

