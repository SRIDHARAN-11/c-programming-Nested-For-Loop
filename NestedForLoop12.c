#include <stdio.h>
int main() {
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=3;k>=i;k--){
            printf(" ");
        }
        for(int l=3;l>=i;l--){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}