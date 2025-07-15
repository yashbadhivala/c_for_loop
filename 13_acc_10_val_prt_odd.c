#include<stdio.h>
int main(){
    int val=0;
    int odd=0;

    for(int i=1;i<=10;i++){
        printf("enter value %d : ",i);
        scanf("%d",&val);
        if(i%2==1){
            printf("%d",val);
        }
    }

    
    return 0;
}