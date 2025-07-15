#include<stdio.h>
int main(){

    int val=0;
    int sum=0;
    printf("enter number : ");
    scanf("%d",&val);

    for(int i=1;i<=val;i++){

        if(val%i==0){
            sum=sum+i;
        }
    }
    printf("sum is %d",sum);
    return 0;
}