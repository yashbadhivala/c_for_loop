#include<stdio.h>
int main(){
    
    int val=0;
    printf("enter number : ");
    scanf("%d",&val);

    for(int i=val-1;i>=1;i--){
        if(val%i==0){
            printf("%d is the highest factor",i);
            break;
        }
    }

    return 0;
}