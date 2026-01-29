#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        int num = i*(i-1)/2 + 1;
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}