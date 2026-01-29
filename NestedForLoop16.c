#include<stdio.h>
int main(){
    char ch;
    for(int i=1;i<=5;i++){
        ch='A'+i-1;
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}