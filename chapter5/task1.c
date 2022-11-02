#include<stdio.h>
int main(){
    int height;
    int width;
    printf("Input Horizontal Number=");
    scanf("%d",&width);
    printf("Input Vertical Number=");
    scanf("%d",&height);
    for(int i = 0; i<height;i++){
        for(int j=0; j<width;j++){
            printf("*");
        }
        printf("\n");
    }
}