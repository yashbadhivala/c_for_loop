#include<stdio.h>
int main(){

    int val=0;
    int pow=1;
    printf("enter number : ");
    scanf("%d",&val);

    for(int i=1;i<=2;i++){
        pow=pow*val;
    }
    printf("%d",pow);

    return 0;
}