#include<stdio.h>
int main(){

    int val=0;
    int count=0;
    for(int i=1;i<=10;i++){
        
        printf("enter number %d :",i);
        scanf("%d",&val);

        if(val%2==0){
            count++;
        }
    }
    printf("even numbers are %d",count);

    return 0;
}