#include<stdio.h>
int main(){
int sum=0;
int val=0;

printf("enter number :");
scanf("%d",&val);

// factors of 6 = 1 2 3 6 (1+2+3=6 exclude 6)


int temp=val;
    for(int i=val-1;i>=1;i--){
        if(val%i==0){
            sum=sum+i;
        }
    }

    if(temp==sum){
        printf("perfect");
    }
    else{
        printf("not perfect");
    }

    return 0;
}